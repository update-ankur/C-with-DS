void inorder(BinaryTreeNode<int>* root){
    if (root==NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
