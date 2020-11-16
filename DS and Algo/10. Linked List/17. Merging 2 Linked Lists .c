void Merge(struct Node *p,struct Node *q){
    struct Node *last;
    if(p->data>q->data){
        third=last=q;
        q=q->next;
        last->next=NULL;
        
    }
    else{
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data>q->data){
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
        else{
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
    }
    if (p) {
        last->next=p;
    }
    else{
        last->next=q;
    }
}
