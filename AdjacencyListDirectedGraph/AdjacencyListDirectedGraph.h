#ifndef LAB6_ADJACENCYLISTDIRECTEDGRAPH_H
#define LAB6_ADJACENCYLISTDIRECTEDGRAPH_H

#include <iostream>
#include <list>
#include <stdexcept>

using namespace std;

template<typename V, typename E>
class AdjacencyListDirectedGraph {

public:

  // Define public data types of Vertex and Edge and the associated iterators.

  class Vertex;
  class Edge;

  typedef list<Vertex> VertexList;
  typedef list<Edge> EdgeList;
  typedef typename VertexList::iterator VertexItor;
  typedef typename EdgeList::iterator EdgeItor;
  typedef typename VertexList::const_iterator VertexConstItor;
  typedef typename EdgeList::const_iterator EdgeConstItor;  

private:

  // Define private data types of VertexObject and EdgeObject and the associated iterators.
  // The type of IncidenceEdgesList and its iterator are defined as well.

  struct VertexObject;
  struct EdgeObject;

  typedef list<VertexObject> VertexObjectList;
  typedef list<EdgeObject> EdgeObjectList;
  typedef list<EdgeList> IncidenceEdgesList;

  typedef typename VertexObjectList::iterator VertexObjectItor;
  typedef typename EdgeObjectList::iterator EdgeObjectItor;
  typedef typename IncidenceEdgesList::iterator IncidenceEdgesItor;

  /*
   * VertexObject stores data of a vertex.
   */
  struct VertexObject {
    V elt;                             // the element stored at this vertex
    VertexObjectItor pos;              // position in vertex_collection
    IncidenceEdgesItor inc_edges_pos;  // position in inc_edges_collection

    VertexObject(V _elt) : elt(_elt) {}  // pos and inc_edges_pos are initially "NULL".
  };

  /*
   * EdgeObject stores data of an edge.
   */
  struct EdgeObject {
                 // the element stored at this edge
    Vertex origin_vertex;           // the vertex at the origin
    Vertex dest_vertex; 
    E elt;                        // the vertex at the destination
    EdgeObjectItor pos;             // position in edge_collection
    EdgeItor origin_inc_edges_pos;  // position in an edge list in inc_edges_collection
    EdgeItor dest_inc_edges_pos;    // position in an edge list in inc_edges_collection

    EdgeObject(const Vertex& v, const Vertex& w, E _elt) : origin_vertex(v), dest_vertex(w), elt(_elt) {} // pos origin_inc_edges_pos, and dest_inc_edges_pos are initially "NULL".
  };

  VertexObjectList vertex_collection;
  EdgeObjectList edge_collection;
  IncidenceEdgesList inc_edges_collection;

public:

  /*
   * Vertex is a position class of a vertex in AdjacencyListDirectedGraph.
   * Internally, a vertex is a pointer to an entry in vertex_collection.
   */
  class Vertex {

    VertexObject *v_obj;

  public:

    /*
     * The constructor of Vertex. This subsumes the default constructor.
     *
     * v - a pointer to a VertexObject
     */
    Vertex(VertexObject* v = NULL) : v_obj(v) {}


    /*
     * Return the element stored at this vertex.
     */
    V& operator*() const {
        return v_obj->elt;
    }

    /*
     * Return a list of edges incident to this vertex.
     */
    EdgeList incidentEdges() const {
        EdgeList inc_edges;

        for(auto it = v_obj->inc_edges_pos->begin(); it != v_obj->inc_edges_pos->end(); ++it){
            inc_edges.push_back(*it);
        } 
        return inc_edges;
    }

    /*
     * Check whether a vertex is adjacent to this vertex.
     * This means whether there is an edge that has this vertex
     * and the given vertex as the end points.
     *
     * v - the given vertex
     */
    bool isAdjacentTo(const Vertex& v) const {
      
      for(auto it = v_obj->inc_edges_pos->begin(); it != v_obj->inc_edges_pos->end(); ++it){
          if ( (it->origin() == v || it->dest() == v ))
            return true;
      }      

      return false;

    }

    /*
     * Check whether there is a directed edge connecting this vertex to the given vertex.
     *
     * v - the given vertex
     */
    bool isOutgoingTo(const Vertex& v) const {
      for(auto it = v_obj->inc_edges_pos->begin(); it != v_obj->inc_edges_pos->end(); ++it){
          if ( it->dest() == v )
            return true;
      }      

      return false;

    }

    /*
     * Return a directed edge connecting this vertex to the given vertex.
     * If the directed edge does not exist, throw an exception.
     *
     * v - the given vertex
     * Return the directed edge connecting this vertex to the given vertex.
     */
    Edge outgoingEdge(const Vertex& v) const {
        for(auto it = v_obj->inc_edges_pos->begin(); it != v_obj->inc_edges_pos->end(); ++it){
          if ( it->dest() == v )
              return *it;
      }      

      throw "Edge Doesn't Exist Error on outgoingEdges function!!!";
    }

    /*
     * Return the set of all directed edges connecting this vertex to any vertex.
     */
    EdgeList outgoingEdges() const {

         EdgeList edges;
         
        for(auto it = v_obj->inc_edges_pos->begin(); it != v_obj->inc_edges_pos->end(); ++it){
            edges.push_back(*it);
      }      

      return edges;

    }

    /*
     * Check whether this vertex is the same as the given vertex
     *
     * v - the given vertex
     * Return true if this vertex is the same as the given vertex
     */
    bool operator==(const Vertex& v) const {

      if(v_obj->elt == *v)
        return true;

      return false;

    }

  
    /*
     * Declare friend to AdjacencyListDirectedGraph so that
     * AdjacencyListDirectedGraph can access to the private
     * member variables of this class.
     */
    friend class AdjacencyListDirectedGraph<V,E>;
  };

  /*
   * Edge is a position class of an edge in AdjacencyListDirectedGraph.
   * Internally, an edge is a pointer to an entry in edge_collection.
   */
  class Edge {

    EdgeObject *e_obj;

  public:

    /*
     * The constructor of Edge. This subsumes the default constructor.
     *
     * v - a pointer to a EdgeObject
     */
    Edge(EdgeObject* e = NULL) : e_obj(e) {}

    /*
     * Return the element stored at this edge.
     */
    E& operator*() const {

          return e_obj->elt;
    }

    /*
     * Return the vertices of this directed edge.
     * The first element of the vertex list is the vertex of the origin.
     * The second element of the vertex list is the vertex of the destination.
     */
    VertexList endVertices() const {
      VertexList temp;
      temp.push_back(e_obj->origin_vertex);
      temp.push_back(e_obj->dest_vertex);
      return temp;
    }

    /*
     * Return the vertex of this edge that is different from the given vertex.
     * If the given vertex is origin, return destination.
     * If the given vertex is destination, return origin.
     * If the given vertex is neither origin nor destination, throw an exception.
     *
     * v - the given vertex
     * Return the other vertex of this edge
     */
    Vertex opposite(const Vertex& v) const {

        if(v == e_obj->origin_vertex){
          return e_obj->dest_vertex;
        }

        else if(v == e_obj->dest_vertex){
          return e_obj->origin_vertex;
        }
        else  
          throw "Error in opposite function!!!";
    }

    /*
     * Check whether a given edge is adjacent to this edge.
     * This means that whether the given edge and this edge
     * shared a vertex.
     *
     * edge - the given edge
     * Return true if the given edge is adjacent to this edge.
     */
    bool isAdjacentTo(const Edge& edge) const {
        if(e_obj->origin_vertex == edge.dest() || e_obj->dest_vertex == edge.origin() || e_obj->origin_vertex == edge.origin() || e_obj->dest_vertex == edge.dest())
          return true;
        
      return false;
    }

    /*
     * Check whether a vertex is incident on this edge.
     * This means that whether the vertex is a vertex of this edge.
     *
     * v - the given vertex
     * Return true if the given vertex is incident to this edge.
     */
    bool isIncidentOn(const Vertex& v) const {
          if(e_obj->origin_vertex == v || e_obj->dest_vertex == v)
            return true;
          return false;
    }

    /*
     * Return the vertex at the origin of this edge.
     */
    Vertex origin() const {
        return e_obj->origin_vertex;
    }

    /*
     * Return the vertex at the destination of this edge.
     */
    Vertex dest() const {
      return e_obj->dest_vertex;
    }

    /*
     * Return true if this is a directed edge.
     * In this class, it should always return true.
     */
    bool isDirected() const {

      if(*e_obj->origin_vertex !=  *e_obj->dest_vertex )
        return true;
      return false;

    }

    /*
     * Check whether this edge is the same as the given edge.
     *
     * edge - the given edge
     * Return true if this edge is the same as the given edge.
     */

    bool operator==(const Edge& edge) const {
        if(*edge == e_obj->elt && edge.origin() == e_obj->origin_vertex &&  edge.dest() == e_obj->dest_vertex){
          return true;
        }
        return false;
    }

    /*
     * Declare friend to AdjacencyListDirectedGraph so that
     * AdjacencyListDirectedGraph can access to the private
     * member variables of this class.
     */
    friend class AdjacencyListDirectedGraph<V,E>;
  };


public:

  /*
   * Return the list of vertices in this graph.
   */
  VertexList vertices() {

    VertexList vertexes;
    


    for(auto it = vertex_collection.begin(); it != vertex_collection.end(); ++it){
        
       // Vertex *vert;
       // *vert->v_obj = *(it->pos);
       // auto temp = Vertex(*(it->pos));
        vertexes->push_back(Vertex(it));
       // delete vert;
    }
    return vertexes;
  }

  /*
   * Return the list of edges in this graph.
   */
  EdgeList edges() {

     EdgeList edgess;

     for(auto it = edge_collection.begin(); it != edge_collection.end(); ++it){
     //   Edge *edger;
     //   *edger->e_obj = *(it->pos);
      //  edgess.push_back(*edger);
     } 

     return edgess;
  //  return edge_collection;
  }

  /*
   * Add a new vertex to this graph.
   *
   * x - the element to be stored in the new vertex.
   * Return the newly created vertex.
   */
  Vertex insertVertex(const V& x) {
      
      //cout << "1indfgd;flgkdfjl;gdf";
      VertexObject *temp = new VertexObject(x);
      temp->pos = vertex_collection.end();
      EdgeList temp_list;
      temp->inc_edges_pos = inc_edges_collection.end();
      inc_edges_collection.push_back(temp_list);
      vertex_collection.push_back(*temp);

      return Vertex(temp);

  }

  /*
   * Add a new edge to this graph. Throw an exception
   * if an edge has already existed between v and w.
   *
   * v - the vertex at the origin
   * w - the vertex at the destination
   * x - the element to be stored in the new edge.
   * Return the newly created edge.
   */
  Edge insertDirectedEdge(const Vertex& v, const Vertex& w, E x) {
     
     cout << "YES\n";
      for(auto it = edge_collection.begin(); it != edge_collection.end(); ++it){
          //VertexList temp = (it->endVertices());

          if( ( (it->origin_vertex) == v && (it->dest_vertex) == w ) || (it->origin_vertex == w && (it->dest_vertex) == v))
            throw "Edge has already existed Error in insertDirectedEdge!!!";
     } 
    
    EdgeObject *cur = new EdgeObject(v, w, x); 
    cur->pos = edge_collection.end();

    //auto v_it = vertex_collection.end(), w_it = vertex_collection.end();
    for(auto it = vertex_collection.begin(); it != vertex_collection.end(); ++it){
      if((it->elt) == *v){
        it->inc_edges_pos->push_back(Edge(cur));
        cur->origin_inc_edges_pos = it->inc_edges_pos->end();
        cur->origin_inc_edges_pos --;
        break;
      }
    
    }

  
    edge_collection.push_back(*cur);

    return Edge(cur);
     


  }

  /*
   * Remove a vertex from this graph. All edges that contain
   * v as one of their vertices are also removed.
   *
   * v - a vertex
   */
  void eraseVertex(const Vertex& v) {
      cout << "NO\n";
      for(auto it = vertex_collection.begin(); it != vertex_collection.end(); ++it){
        if(it->elt == *v){
          for(auto iter = it->inc_edges_pos->begin(); iter != it->inc_edges_pos->end(); ++it){
             // inc_edges_collection.remove(new EdgeObject(*iter));
            cout << "NO\n";
          }
        //  inc_edges_collection.remove(it->inc_edges_pos);
       //   vertex_collection.remove(*it);
       //s   break;
        }
      }

  }

  /*
   * Remove an edge from this graph.
   *
   * e - an edge
   */
  void eraseEdge(const Edge& e) {
      cout << "NO\n";
  }

};


#endif //LAB6_ADJACENCYLISTDIRECTEDGRAPH_H
