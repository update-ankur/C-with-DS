template <typename T>
void printTree(TreeNode<T>* root){
    cout<<root->data<<endl;
    for(int i =0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
