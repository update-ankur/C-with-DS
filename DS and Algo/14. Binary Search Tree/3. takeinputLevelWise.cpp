BST<int>* takeinputLevelWise(){
    cout<<"Enter Root Data"<<endl;
    int rootData;
    cin>>rootData;
    
    if (rootData==-1) {
        return NULL;
    }
    
    BST<int>* root=new BST<int>(rootData);
    queue<BST<int>*> record;
    record.push(root);
    
    while (record.size()!=0) {
        BST<int>* front=record.front();
        record.pop();
        cout<<"Enter "<<front->Data<<"'s Left Children"<<endl;
        int leftData;
        cin>>leftData;
        if (leftData!=-1) {
            BST<int>* leftChild=new BST<int>(leftData);
            front->left=leftChild;
            record.push(leftChild);
        }
       
        cout<<"Enter "<<front->Data<<"'s Right Children"<<endl;
        int rightData;
        cin>>rightData;
        if (rightData!=-1) {
            BST<int>* rightChild=new BST<int>(rightData);
            front->right=rightChild;
            record.push(rightChild);
        }
    }
    return root;
}
