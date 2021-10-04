void CheckLoop(struct Node *f){
    struct Node *q,*p;
    q=p=f;
    do {
        p=p->next;
        q=q->next;
        if (q) {
            q=q->next;
        }
    } while (p && q && p!=q);
    if(p==q){
        printf("True \n");
    }
    else
        printf("False \n");

}
     
