int NumofNodes(BinaryTreeNode<int>* root){
    
    if(root==NULL){
        return 0;
    }
    
    return 1+ NumofNodes(root->left)+NumofNodes(root->right);
}
