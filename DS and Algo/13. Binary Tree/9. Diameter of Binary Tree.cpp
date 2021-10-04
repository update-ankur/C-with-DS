int Diameter(BinaryTreeNode<int>* root){
    if (root==NULL) {
        return 0;
    }
    int option1=height(root->left)+height(root->right);
    int option2=Diameter(root->left);
    int option3=Diameter(root->right);
    
    return max(option1, max(option2, option3));
}
