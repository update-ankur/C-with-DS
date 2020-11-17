#include <iostream>
    
class Node{
public:
    int data;
    Node *next;
};



class LinkedList{
private:
    Node *first;
public:
    LinkedList(){   //constructor
        first=NULL;
    }
    LinkedList(int A[],int n);
    ~LinkedList();  //distructor

    void Display();
    void Insert(int index, int value);
    int Delete(int index);
    int Length(); //count
};

LinkedList::LinkedList(int A[],int n){
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

LinkedList::~LinkedList(){  //deleting LinkedList
    Node *p=first;
    while(first){
        first=first->next;
        delete p;
        p=first;
    }
}

void LinkedList::Display(){
    Node *p=first;
    while(p){
        std::cout<<p->data<<" ";
        p=p->next;
    }
}


int LinkedList::Length(){
    Node *p=first;
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}

void LinkedList::Insert(int index, int value){
    Node *t,*p=first;
    if(index<0 || index>Length()){
        return;
    }
    
    t=new Node;
    t->data=value;
    t->next=NULL;
    
    if(index==0){
        first=t;
    }
    
    else if(index>0){
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}


int LinkedList::Delete(int index){
    
    Node *p,*q=NULL;
    int x;
    if(index<1 || index>Length()){
        return -1;
    }
    if(index==1){
        p=first;
        first=first->next;
        x=p->data;
        delete p;
    }
    else{
        p=first;
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
    }
    return x;
}


int main(int argc, const char * argv[]) {
    int A[]={2,3,4,5,8};
    LinkedList l(A,5);
    l.Insert(2, 9);
    l.Display();
    std::cout<<std::endl;

    std::cout<<l.Length()<<std::endl;
    
    
    return 0;
}
