template <typename T>
class BST{
public:
    int Data;
    BST *left;
    BST *right;
    
    BST(T data){
        this->Data=data;
        left=right=NULL;
    }
    ~BST(){
        delete left;
        delete right;
    }
};
