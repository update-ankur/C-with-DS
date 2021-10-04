void inBetween(BST<int>* root, int value1, int value2){
    if (root==NULL){
        return;
    }
    if (root->Data>=value1 && root->Data<=value2) {
        cout<<root->Data<<" ";
    }
    if (root->Data>value1) {
        inBetween(root->left, value1, value2);
    }
    if (root->Data<value2){
        inBetween(root->right, value1, value2);
    }
}
