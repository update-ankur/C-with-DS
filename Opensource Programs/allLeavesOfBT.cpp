#include<iostream>
using namespace std;
struct Node{
    int data;
    int subtreeSum;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int findmax(struct Node*root){
    if(root == NULL){
        return 0;
    }
    int value = root->data;
    int lvalue = findmax(root->left);
    int rvalue = findmax(root->right);
    if(lvalue > value){
        value = lvalue;
    }
    if(rvalue > value){
        value = rvalue;
    }
    return value;
}
int main(){
    #ifndef ONLINE_JUDGE
       // freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int sum = findmax(root);
    cout<<"value "<<sum;
    return 0;
}
