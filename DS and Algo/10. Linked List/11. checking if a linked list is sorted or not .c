int isSorted(struct Node *p){
    int x=-65536;
    while (p!=NULL) {
        if(p->data<x){
            return -1;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}
