void printTreeLevelwise(TreeNode<int>* root){
    if (root==NULL) {   //edge case., (not a base case),base case is already involved
        return;
    }
    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTreeLevelwise(root->children[i]);
    }
}
