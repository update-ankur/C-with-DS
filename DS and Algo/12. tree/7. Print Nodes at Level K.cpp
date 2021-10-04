void printAtLevelK(TreeNode<int>* root, int K){
    if(root==NULL){ //edge case
        return;
    }
    if(K==0){
        cout<<root->data<<" ";
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i], K-1);
    }
}
