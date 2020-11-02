#include <stdio.h>
#include <stdlib.h>

struct Node{
  
    int data;
    struct Node *next;
    
}*first=NULL;    //global pointer

void create(int A[], int n){
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *p){

    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int main(){
    
    int A[]={2,3,4,5};
    create(A,4);
    Display(first);
    
    
    return 0;
}
