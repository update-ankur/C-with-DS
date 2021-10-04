#include <iostream>

class Node{
public:
    int data;
    Node *next;
};
class CircularLinkedList{
private:
    Node *Head;
public:
    CircularLinkedList();
    CircularLinkedList(int A[],int size);
 //   ~CircularLinkedList();
    void Display();
    int Length();
    
};

CircularLinkedList::CircularLinkedList(int A[],int size){
    Node *t,*last;
    int i=0;
    Head=new Node;
    Head->data=A[i];
    Head->next=Head;
    last=Head;
    t=NULL;
    do {
        t=new Node;
        i++;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    } while (i<size);
}

void CircularLinkedList:: Display(){
    Node *p=Head;
    do{
        std::cout<<p->data<<std::endl;
        p=p->next;
    }while(p->next!=Head);
}

int CircularLinkedList::Length(){
    int len=0;
    Node *p=Head;
    do {
        len++;
        p=p->next;
    } while (p->next!=Head);
    return len;
}



int main() {

    int A[]={2,3,4,5,6,7};
    CircularLinkedList C(A,6);
    //C.Display();
    std::cout<<C.Length()<<std::endl;
    return 0;
}

