BinaryTreeNode<int>* buildTreeHelper(int *in,int *pre,int inS,int inE,int preS, int preE){
    
    if (inS>inE) {   //null array
        return NULL;
    }
    int rootData=pre[preS];
    
    // Pre--->> Root, left, right;
    // In---->> left, root, right;
    int rootIndex=-1;
    for(int i=inS;i<=inE;i++){
        if (rootData==in[i]) {
            rootIndex=i;
        }
    }
    
    int LeftInStart=inS;
    int LeftInEnd=rootIndex-1;
    int LeftPreStart=preS+1;
    int LeftPreEnd=LeftInEnd-LeftInStart+LeftPreStart;
    
    
    int RightPreStart=LeftPreEnd+1;
    int RightPreEnd=preE;
    int RightInStart=rootIndex+1;
    int RightInEnd=inE;
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    
    root->left=buildTreeHelper(in,pre,LeftInStart,LeftInEnd,LeftPreStart,LeftPreEnd);
    
    root->right=buildTreeHelper(in, pre, RightInStart, RightInEnd, RightPreStart, RightPreEnd);

    return root;
}



BinaryTreeNode<int>* buildTree(int *in, int *pre, int size){
    
    return buildTreeHelper(in,pre,0,size-1,0,size-1);
}
