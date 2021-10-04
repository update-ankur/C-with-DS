
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
