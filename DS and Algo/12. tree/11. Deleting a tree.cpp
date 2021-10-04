void DeleteTree(TreeNode<int>* root){
    for(int i=0;i<root->children.size();i++){
        DeleteTree(root->children[i]);
    }
    delete root;
}
