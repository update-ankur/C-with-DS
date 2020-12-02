#include "BinarySearchTree.h"
using namespace std;

class BST{
    
private:
    BinarySearchTree<int>* root;

public:
    
    BST(){
        root=NULL;
    }
    
    ~BST(){
        delete root;
    }
    
    
    BinarySearchTree<int>* deleteData(int data, BinarySearchTree<int>* node){
        if (node==NULL) {
            return NULL;
        }
        if (node->Data>data) {
            node->left=deleteData(data,node->left); //can be null., so we need to update
            return node;
        }else if(node->Data<data){
            node->right=deleteData(data,node->right); //can be null., so we need to update
            return node;
        }else{
            
            if (node->left==NULL && node->right==NULL) {
                delete node;
                return NULL;
            }
            
            else if(node->left==NULL){
                BinarySearchTree<int>* temp=node->right;
                node->right=NULL;
                delete node;
                return temp;
            }
            
            else if(node->right==NULL){
                BinarySearchTree<int>* temp=node->left;
                node->left=NULL;
                delete node;
                return temp;
            }
            
            else{
                BinarySearchTree<int>* replacement=node->right;
                while(replacement->left!=NULL){
                    replacement=replacement->left; //right side min
                }
                int ReplacingValue=replacement->Data;
                node->Data=ReplacingValue;
                node->right=deleteData(ReplacingValue,node->right);
                //can be null., so we need to update
                return node;
            }
        }
        
        return node;
    }
    
    
    void deleteData(int data){
        root=deleteData(data,root);
    }
    
    
private:
    
    BinarySearchTree<int>* insertData(int data,BinarySearchTree<int>* node){
        
        if (node==NULL) {
            BinarySearchTree<int>* newnode=new BinarySearchTree<int>(data);
            return newnode;
        }
        if (node->Data>data) {
            node->left=insertData(data,node->left);
        }else{
            node->right=insertData(data,node->right);
        }
        return node;
    }
    
public:
    
    void insertData(int data){
        this->root=insertData(data,this->root);
    }
    
    
private:
    
    bool hasData(BinarySearchTree<int>* node,int value){
        if (node==NULL) {
            return false;
        } else if (node->Data==value) {
            return true;
        } else if(node->Data>value){
            return hasData(node->left,value);
        } else{
            return hasData(node->right,value);
        }
    }

public:
    bool hasData(int data){
        return hasData(root,data);
    }
    
    
private:
    void printTree(BinarySearchTree<int>* node){
        if (node==NULL) {
            return;
        }
        cout<<node->Data<<" :";
        if (node->left != NULL) {
            cout<<"L"<<node->left->Data;
        }
        
        if (node->right != NULL) {
            cout<<" R"<<node->right->Data;
        }
        cout<<endl;
        printTree(node->left);
        printTree(node->right);
    }
    
public:
    void printTree(){
        printTree(root);
    }
};
