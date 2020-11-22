#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class StackUsingLL{
    Node *Head;
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
    void push(int x){
        Node *p=new Node(x);
        p->next=Head;
        Head=p;
        size++;
    }
    int pop(){
        int x=Head->data;
        Node *p=Head->next;
        delete Head;
        Head=p;
        size--;
        return x;
    }
    int Top(){
        return Head->data;
    }
};

int main(){
    
    StackUsingLL c;
    c.push(10);
    c.push(20);
    c.push(30);
    cout<<c.getsize()<<endl;
    cout<<c.pop()<<endl;
    cout<<c.pop()<<endl;
    cout<<c.isempty()<<endl;
    cout<<c.Top()<<endl;
    
    return 0;
}
