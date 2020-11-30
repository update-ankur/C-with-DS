bool isBST3(BST<int>* root, int min=INT_MIN, int max=INT_MAX){
    if (root==NULL) {
        return true;
    }
    if (root->Data<min || root->Data>max) {
        return false;
    }
    bool leftOK=isBST3(root->left,min,root->Data);
    bool rightOK=isBST3(root->right,root->Data,max);
    
    return leftOK && rightOK;   // true if both are true
}
