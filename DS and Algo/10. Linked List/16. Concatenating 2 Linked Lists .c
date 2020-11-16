// concat using 3rd pointer
void Concat(struct Node *p,struct Node *q){
    third=p;
    while (p->next!=NULL) {
        p=p->next;
    }
    p->next=q;
    
}

// concat one in another
void Concat2(struct Node *p,struct Node *q){
    while (p->next!=NULL) {
        p=p->next;
    }
    p->next=q;
    
}
