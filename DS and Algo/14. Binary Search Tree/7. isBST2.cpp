class isBSTReturn{
public:
    int minimum;
    int maximum;
    bool isBST;
};

class Node{
public:
    Node* next;
    Node(){
        next=NULL;
    }
};


isBSTReturn isBST2(BST<int>* root){
    if (root==NULL) {
        isBSTReturn ouput;
        ouput.minimum=INT_MAX;
        ouput.maximum=INT_MIN;
        ouput.isBST=true;
        return ouput;
    }
    
    isBSTReturn left=isBST2(root->left);
    isBSTReturn right=isBST2(root->right);
    
    int minimum=min(root->Data,min(right.minimum,left.minimum));
    int maximum=max(root->Data,max(right.maximum,left.maximum));
    //root->Data>maximum(root->left) && root->Data<=minimum(root->right) && isBST(root->left) && isBST(root->right)
    bool isBSTFinal= root->Data>left.maximum && root->Data<=right.minimum && left.isBST && right.isBST;
    
    isBSTReturn ouputfinal;
    
    ouputfinal.isBST=isBSTFinal;
    ouputfinal.minimum=minimum;
    ouputfinal.maximum=maximum;
    
    return ouputfinal;
}
// T=O(n)
