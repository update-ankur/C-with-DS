void removeDuplicate(struct Node *p){
    struct Node *q;
    q=p->next;
    while(q){
        if(q->data==p->data){
            p->next=q->next;
            free(q);
            q=p->next;
        }
        else{
            p=q;
            q=q->next;
        }
    }
    
}
