#ifndef __TREE_H__
#define __TREE_H__
#include <sstream>
#include <cassert>
#include <string>
#include <iostream>
using namespace std;


/*
 * These two typedef are added to make to code more readable.
 */
typedef long data_t;
typedef long my_key_t;
struct Node_t {
    my_key_t key;
    data_t data;
    Node_t* parent, *left, *right;
    short meta; // To keep color for RB or balancing factor for AVL

    Node_t(my_key_t k, data_t v) : key(k), data(v), parent(NULL), left(NULL), right(NULL), meta(0) {}
};

/*
 * This struct is used for search to return two items.
 */
struct Return_t {
    data_t data;
    bool valid;

    Return_t(data_t x) : data(x), valid(false) {}
};

class Tree_t {

    protected:
        Node_t* root;


        /*
         * You don't need to implement the following protected functions,
         * but are advised to do so and utilize them to implement the others.
         */

        /*
         * When debugging, you may want to implement this and call
         * whenever the tree is being modifies, to check if the tree satisfies
         * the condition for bst.
         */
        //bool check_property(Node_t* root) {        }

        /*
         * A recursive search from a subtree
         */
        //Node_t* search_subtree(Node_t* root, my_key_t key) const {}

        /*
         * Recursive node removal.
         */
        //void remove_node(Node_t* n) {}

        /*
         * Recursive node insertion
         */
       // Node_t* insert_internal(my_key_t key, data_t data, short meta=0) {
        //}


        /*
         * Recursive destruction for the destructor
         */
       // void free_subtree(Node_t* r) {
       // }


        /*
         * Use this for debugging.
         */

        string to_string(Node_t* n) {
            if(!n) return string("EMPTY");
            stringstream ret;
            ret << "<" << n->key << "," << n->data << "> (" << n->meta << ")";
            return ret.str();
        }

        /*
         * Left or right rotate at a node. By implementing it here, you can
         * use it in the other classes.
         */
      //  void rotate(Node_t* ni, bool left) {
      //  }

        /*
         * Recursive pre order traversal for grading uses this to learn about the tree structure.
         */
        string to_string_pre_order(Node_t* root) {
            stringstream ret;
            if(root) {
                ret << to_string(root) << endl;
                if(root->left) ret << to_string_pre_order(root->left);
                if(root->right) ret << to_string_pre_order(root->right);
            }
            return ret.str();
        }

        /*
         * Print out a subtree for debugging
         */
      //  void dump_subtree(Node_t* root, string prefix=string("")) {
      //  }


    public:
        Tree_t() {

            root = NULL;

        }
        ~Tree_t() {
        }

        /*
         * insert, remove, search: The interfaces that you should implement.
         * When removing an internal node, we replace it with the smallest
         * one on its right subtree, to use a single reference output.
         */
        Node_t* insert(Node_t* root, my_key_t key, data_t data){
            if(root == NULL){
                return new Node_t(key, data);
            }

            else if(root->key == key){
                root->data = data;
            }

            else if(root->key > key){
                root->left = insert(root->left, key, data);
            }
            else if(root->key < key){
                root->right = insert(root->right, key, data);
            }   
            return root;

        }
        void insert(my_key_t key, data_t data) {
         
            root = insert(root, key, data);
            
        }

        Node_t* find_child(Node_t* root){
            Node_t* cur = root;
            while(cur->left != NULL){
                cur = cur->left;
            }
            return cur;
        }
        void delete_childs(my_key_t key){
            assert(root->key == key);
            assert(root->left != NULL);
            assert(root->right != NULL);

            Node_t* child = find_child(root->right);
            root->key = child->key;
            root->data = child->data;
            root->right = delete_key(root->right, child->key);
        }

        Node_t* delete_key(Node_t* root, my_key_t key){
            if(root == NULL)
                return root;
            if(key < root->key){
                root->left = delete_key(root->left, key);
            }
            else if (key > root->key){
                root->right = delete_key(root->right, key);
            }
            else{
                if(root->right == NULL){
                    return root->left;
                }
                else if (root->left == NULL){
                    return root->right;
                }
                else{
                    delete_childs(key);               }
            }

            return root;
        }
         Node_t* search_key(Node_t* root, my_key_t key){
            if(root == NULL || root->key == key)
                return root;

            if(key < root->key)
                return search_key(root->left, key);
            else 
                return search_key(root->right, key);
        }

        Return_t search(my_key_t key) {
           
           Node_t* temp = search_key(root, key);

           if(temp){
                Return_t ret = Return_t(temp->data);
                
                if(temp->key == key)
                    ret.valid = true;
                return ret;
            }
           return Return_t(0);

        }
        bool remove(my_key_t key) {


            Return_t check = search(key);
            if(!check.valid || root == NULL){
                return false;
            }

            else{
                root = delete_key(root, key);
                return true;
            }

        }
        

        string to_string_pre_order(void) {
            return to_string_pre_order(root);
        }


};
#endif
