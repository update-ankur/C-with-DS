void PrintPostOrder(TreeNode<int>* root){
    for(int i=0;i<root->children.size();i++){
        PrintPostOrder(root->children[i]);
    }
    cout<<root->data<<" ";
}
