void CircularLinkedList::Delete(int position){
    
    Node *Delete=Head;
    Node *p=NULL;
    int i=0;
    do{
        Delete=Delete->next;
        i++;
    }while(i<position-2);
    p=Delete->next;
    p->next=Delete->next->next;
    Delete->next=p->next;
    delete p;
}
