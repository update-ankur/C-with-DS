void Reverse(struct Node *p){
    int size=Count(p);
    int i=0;
    int a[size];
    //struct Node *q=(struct Node *)malloc(size*sizeof(struct Node));
    struct Node *q;
    q=p;
    while(q){
        a[i]=q->data;
        q=q->next;
        i++;
    }
    i--;
    q=p;
    while(q){
        q->data=a[i];
        q=q->next;
        i--;
    }
}
