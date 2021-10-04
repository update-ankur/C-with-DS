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
