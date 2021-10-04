void ReverseSlider(struct Node *p){
    struct Node *q,*r;
    p=first;
    q=NULL;
    r=NULL;
    while (p) {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
