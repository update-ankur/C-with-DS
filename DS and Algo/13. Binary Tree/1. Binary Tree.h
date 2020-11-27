template <typename T>
class BinaryTreeNode{
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* Right;
    
    BinaryTreeNode(T data){
        this->data=data;
        left=right=NULL;
    }
    
    ~BinaryTreeNode{
        delete left;
        delete right;
    }
};
