void printTree(BST<int>* root){
    if (root==NULL) {
        return;
    }
    cout<<root->Data<<" :";
    if (root->left != NULL) {
        cout<<"L"<<root->left->Data;
    }
    
    if (root->right != NULL) {
        cout<<" R"<<root->right->Data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);

}
