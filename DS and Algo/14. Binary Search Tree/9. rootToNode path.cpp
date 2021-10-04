vector<int>* rootToNode(BST<int>* root,int value){
    if (root==NULL) {
        return NULL;
    }
    if (root->Data==value) {
        vector<int>* output=new vector<int>();
        output->push_back(root->Data);
        return output;
    }
// this is for binary tree not for BST.,
    // remember BST(is in sorted type)., but binary tree is random
    
    vector<int>* leftOutput=rootToNode(root->left,value);
    if (leftOutput!=NULL) {
        leftOutput->push_back(root->Data);
        return leftOutput;
    }
    
    vector<int>* rightOutput=rootToNode(root->right,value);
    if (rightOutput!=NULL) {
        rightOutput->push_back(root->Data);
        return rightOutput;
    }
    else{
        return NULL;
    }
    
}
