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
