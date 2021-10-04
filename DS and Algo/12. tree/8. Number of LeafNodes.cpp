int leafNode(TreeNode<int>* root){
    int ans=0;
    if(root->children.size()==0){
        return 1;
    }
    for(int i=0;i<root->children.size();i++){
        ans+=leafNode(root->children[i]);
    }
    return ans;
}
