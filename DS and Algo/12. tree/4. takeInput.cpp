TreeNode<int> * takeInput(){
    int rootData;
    cout<<"Enter Data: "<<endl;
    cin>>rootData;
    TreeNode<int>* root=new TreeNode<int>(rootData);
    int n;
    cout<<"Number of Children "<<rootData<<" :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child=takeInput();
        root->children.push_back(child);
    }
    return root;
}
