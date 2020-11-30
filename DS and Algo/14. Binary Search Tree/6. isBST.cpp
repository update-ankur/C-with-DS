int maximum(BST<int>* root){
    
    if (root==NULL) {
        return INT_MIN;
    }
    
    int ans= max(root->Data,max(maximum(root->left),maximum(root->right)));
    
    return ans;
}


int minimum(BST<int>* root){
    if (root==NULL) {
        return INT_MAX;
    }
    
    int ans= min(root->Data,min(minimum(root->left),minimum(root->right)));
    
    return ans;
}
bool isBST(BST<int>* root){
    
    if (root==NULL) {   //base case
        return true;
    }
    
    bool ans=root->Data>maximum(root->left) && root->Data<=minimum(root->right) && isBST(root->left) && isBST(root->right);
    
    return ans;
