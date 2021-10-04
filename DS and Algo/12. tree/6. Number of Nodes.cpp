int numNodes(TreeNode<int>* root){
    if (root==NULL) {
        return 0;
    }
    int n=1;
    for(int i=0;i<root->children.size();i++){
        n+=numNodes(root->children[i]);
    }
    return n;
}
