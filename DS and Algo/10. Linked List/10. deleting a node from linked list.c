void Delete(struct Node *p,int index){
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    if(index==1){
        t=p;
        p=p->next;
        free(t);
    }
    else{
        t=p;
        for(int i=0;i<index-1;i++){
            t=p;
            p=p->next;
        }
        t->next=p->next;
        p->next=NULL;
        free(p);
    }
}
