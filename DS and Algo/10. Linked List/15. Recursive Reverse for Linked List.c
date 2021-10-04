void RecursiveReverse(struct Node *q,struct Node *p){

    if(p){
        RecursiveReverse(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}



//     RecursiveReverse(NULL,first);
