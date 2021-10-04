#include <iostream>
using namespace std;
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
class StackUsingLL{
    Node<T> *Head;
    int size;
public:
    StackUsingLL(){
        size=0;
        Head=NULL;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        // also you can use size==0
        return Head==NULL;
    }
    void push(T x){
        Node<T> *p=new Node<T>(x);
        p->next=Head;
        Head=p;
        size++;
    }
    T pop(){
        if(isempty()){    // we can even use head==NULL
            return 0;
        }
        int x=Head->data;
        Node<T> *p=Head->next;
        delete Head;
        Head=p;
        size--;
        return x;
    }
    T Top(){
        if(isempty()){    // we can even use head==NULL
            return 0;
        }
        return Head->data;
    }
};

int main(){
    
    StackUsingLL<char> c;
    c.push(100);
    c.push(102);
    c.push(103);
    cout<<c.getsize()<<endl;
    cout<<c.pop()<<endl;
    cout<<c.pop()<<endl;
    cout<<c.isempty()<<endl;
    cout<<c.Top()<<endl;
    
    return 0;
}
