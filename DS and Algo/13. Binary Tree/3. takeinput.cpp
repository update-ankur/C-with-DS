BinaryTreeNode<int>* takeinput(){
    cout<<"Enter Data: ";
    int rootData;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* child1=takeinput();
    BinaryTreeNode<int>* child2=takeinput();
    root->left=child1;
    root->right=child2;
    return root;
}
