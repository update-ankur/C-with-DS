#include <iostream>

class Node{
public:
    Node *prev;
    int data;
    Node *next;
};

class DoublyLinkedList{
private:
    Node *First;
public:
    DoublyLinkedList(){
        First=NULL;
    }
    DoublyLinkedList(int A[],int n);
    void Display();
    int Length();
    void Insert(int x, int position);
    void Delete(int position);
    void Reverse();
};

DoublyLinkedList::DoublyLinkedList(int A[],int n){
    First=new Node;
    Node *last=new Node;
    First->data=A[0];
    First->next=First->prev=NULL;
    last=First;
    for(int i=1;i<n;i++){
        Node *p=new Node;
        p->data=A[i];
        p->next=last->next;
        p->prev=last;
        last->next=p;
        last=p;
    }
}

void DoublyLinkedList::Display(){
    Node *p=First;
    while(p){
        std::cout<<p->data<<" ";
        p=p->next;
    }
}

int DoublyLinkedList::Length(){
    Node *p=First;
    int i=0;
    while(p){
        p=p->next;
        i++;
    }
    return i;
}

void DoublyLinkedList::Insert(int x, int position){
    
    if(position<0 || position>Length()){
        return;
    }
    
    Node *q=First;
    Node *p=new Node;
    p->data=x;
    p->prev=p->next=NULL;
    
    if(position==0){
        First=p;
    }
    else if(position>0){
        for (int i=0; i<position; i++) {
            q=q->next;
        }
        p->next=q->next;
        q->next=p;
    }
}

void DoublyLinkedList::Delete(int position){
    Node *q,*p=First;
    q=NULL;
    if(position>Length()|| position<0){
        return;
    }
    else{
        for(int i=1;i<position;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        p->next=p->prev=NULL;
        delete p;
    }
}

void DoublyLinkedList::Reverse(){   // swap pointers of a node
    Node *p=First;
    Node *temp;
    while(p){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;  //moving forward to swap pointer
        if(p && p->next==NULL){
            First=p;
        }
    }
}

int main(int argc, const char * argv[]) {
    int A[]={1,2,3,4,7};
    DoublyLinkedList d(A,5);
    d.Display();
    std::cout<<std::endl;
    std::cout<<d.Length()<<std::endl;
    //d.Insert(5, 0);
    d.Delete(2);
    d.Display();
    std::cout<<std::endl;
    d.Reverse();
    d.Display();
    return 0;
}
