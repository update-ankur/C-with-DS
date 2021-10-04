void printTree(BinaryTreeNode<int>* root){
    if (root==NULL) {
        return;;
    }
    cout<<root->data<<" ";
    if (root->left != NULL) {
        cout<<"L "<<root->left->data;
    }
    printTree(root->left);
    if (root->right != NULL) {
        cout<<"R "<<root->right->data;
    }
    printTree(root->right);
    
}
