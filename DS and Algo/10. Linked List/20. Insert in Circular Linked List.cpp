void CircularLinkedList::Insert(int x,int position){
    Node *insert= new Node;
    Node *p=Head;
    insert->data=x;
    if(position<0 || position>Length()){
        return;
    }
    if(position==0){
        do{
            p=p->next;
        }while(p->next!=Head);
        p->next=insert;
        insert->next=Head;
        Head=insert;
    }
    else{
        for(int i=0;i<position-1;i++){
            p=p->next;
        }
        insert->next=p->next;
        p->next=insert;
    }
}
