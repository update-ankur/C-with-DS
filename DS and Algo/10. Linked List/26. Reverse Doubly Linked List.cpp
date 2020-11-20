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
