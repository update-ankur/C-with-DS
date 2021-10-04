template <typename T>
class Node{
public:
    T data;
    Node<T> *next;
    Node(T data){
        this->data=data;
        next=NULL;
    }
};


template <typename T>
class QueueUsingLL{
    Node<T> *head;
    Node<T> *tail;
    int size;
public:
    QueueUsingLL(){
        head=tail=NULL;
        size=0;
    }
    
    int getsize(){
        return size;
    }
    
    bool isempty(){
        return size==0;
    }
    
    void enqueue(T x){
        Node<T> *p=new Node<T>(x);
        if(head==NULL){
            tail=head=p;
            size++;
            return;
        }
        tail->next=p;
        tail=p;
        size++;
    }
    int front(){
        if(head==NULL){ //we can even use isempty() fn;
            return 0;
        }
        int value=head->data;
        return value;

    }
    T dequeue(){
         if(head==NULL){ //we can even use isempty() fn;
            return 0;
        }
        T value=head->data;
        Node<T> *p=head;
        head=head->next;
        size--;
        delete p;
        return value;
    }
};
