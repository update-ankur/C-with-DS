BinaryTreeNode<int>* takeinputLevelWise(){
    cout<<"Enter Root Data"<<endl;
    int rootData;
    cin>>rootData;
    
    if (rootData==-1) {
        return NULL;
    }
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> record;
    record.push(root);
    
    while (record.size()!=0) {
        BinaryTreeNode<int>* front=record.front();
        record.pop();
        cout<<"Enter "<<front->data<<"'s Left Children"<<endl;
        int leftData;
        cin>>leftData;
        if (leftData!=-1) {
            BinaryTreeNode<int>* leftChild=new BinaryTreeNode<int>(leftData);
            front->left=leftChild;
            record.push(leftChild);
        }
       
        cout<<"Enter "<<front->data<<"'s Right Children"<<endl;
        int rightData;
        cin>>rightData;
        if (rightData!=-1) {
            BinaryTreeNode<int>* rightChild=new BinaryTreeNode<int>(rightData);
            front->right=rightChild;
            record.push(rightChild);
        }
    }
    return root;
}
