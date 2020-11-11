void InsertSorted(struct Node *p,int value){
    struct Node *t;
    struct Node *new=(struct Node *)malloc(sizeof(struct Node));
    new->data=value;
    while(p && p->data<new->data){
        if(p->data<new->data && p->next->data>new->data){
            t=p;
            p=p->next;
            new->next=t->next;
            t->next=new;
        }
        t=p;
        p=p->next;
    }
}
