#include "Tree.h"

class SplayTree_t : public Tree_t {

    /*
     * It should be a good idea to implement separate splay function.
     */

    Node_t* right_rotate(Node_t* root){

         Node_t* temp = root->left;
         root->left = temp->right;
         temp->right = root;
         return temp;
    }

    Node_t* left_rotate(Node_t* root){

       Node_t* temp = root->right;
       root->right = temp->left;
       temp->left = root;
       return temp;
    }

    
    Node_t* splay(Node_t* root, my_key_t key){
        
        if(root == NULL || root->key == key)
            return root;
        if(root->key > key){
            if(root->left == NULL){
                return root;
            }
            if(root->left->key > key){
                root->left->left = splay(root->left->left, key);
                root = right_rotate(root);
            }

            else if(root->left->key < key){
                root->left->right = splay(root->left->right, key);
                if(root->left->right != NULL)
                    root->left = left_rotate(root->left);
            }
            if(root->left == NULL)
                return root;
            else
                return right_rotate(root);
        }
        else{
            if(root->right == NULL)
                return root;
            if(root->right->key > key){
                root->right->left = splay(root->right->left, key);
                if(root->right->left != NULL)
                    root->right = right_rotate(root->right);
            }
            else if(root->right->key < key){
                root->right->right = splay(root->right->right, key);
                root = left_rotate(root);
            }
            if(root->right == NULL)
                return root;
            else
                return left_rotate(root);
        }
    }

    /*
     * check if the splayed on is at the root
     */
    void check_splayed(my_key_t k) {
    }

    public:
    SplayTree_t() : Tree_t() {root = nullptr;}
    void insert(my_key_t key, data_t data) {
        /*if(root == NULL){
            root = new Node_t(key, data);
        }

        root = splay(root, key);

        if(root->key == key)
            return;

        Node_t* temp = new Node_t(key, data);

        if(root->key > key){
            temp->right = root;
            temp->left = root->left;
            root->left = NULL;
        }
        else{
            temp->left = root;
            temp->right = root->right;
            root->right = NULL;
        }

        root = temp;*/
        Tree_t::insert(key, data);
    }

    Return_t search(my_key_t key) {
       /* Node_t* temp = splay(root, key);
        Return_t ret = Return_t(0);
        if(temp){
            ret.data = temp->data;
            ret.valid = true;
        }
        else
            ret.valid = false;
        return ret;*/
        return Tree_t::search(key);

    }

    Node_t* remove(Node_t* root, my_key_t key){
       

        Node_t* temp;
        if (root == NULL) 
            return NULL; 
       
        root = splay(root, key); 
      
        if (key != root->key) 
            return root; 
          
        if (!root->left){ 
            temp = root; 
            root = root->right; 
        } 
              
        else{ 
            temp = root; 
            root = splay(root->left, key); 
            root->right = temp->right; 
        } 
          
        free(temp); 
        return root; 
    }

    bool remove(my_key_t key) {


            return Tree_t::remove(key);
            /*root = remove(root, key);
            
            if(root == NULL || root->key != key){
                return false;
            }
            else
                return true;*/
    }
};

 