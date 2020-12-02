template <typename T>
class BinarySearchTree{
public:
    int Data;
    BinarySearchTree *left;
    BinarySearchTree *right;
    
    BinarySearchTree(T data){
        this->Data=data;
        left=right=NULL;
    }
    ~BinarySearchTree(){
        delete left;
        delete right;
    }
};

