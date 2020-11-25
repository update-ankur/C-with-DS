TreeNode<int> * takeInputLavelWise(){
    queue<TreeNode<int>*> q;
    int rootData;
    cout<<"Enter Data: "<<endl;
    cin>>rootData;
    
    TreeNode<int>* root=new TreeNode<int>(rootData);
    q.push(root);
    while (q.size()!=0) {
        TreeNode<int>* front=q.front();
        q.pop();
        cout<<"Enter Num of Children of "<<front->data<<": "<<endl;
        int Number;
        cin>>Number;
        for(int i=0;i<Number;i++){
            int cdata;
            cout<<"Enter "<<i+1<<" child: "<<endl;
            cin>>cdata;
            TreeNode<int>* child=new TreeNode<int>(cdata);
            front->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}
