
BST<int>* search(BST<int>* root,int value){
    if (root==NULL) {
        return NULL;
    }
    else if (root->Data==value) {
        return root;
    }
    else if(root->Data>value){
        return search(root->left,value);
    }
    else{
        return search(root->right,value);
    }
}
