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

void RDisplay(struct Node *p){
    if(p){
        printf("%d ", p->data);
        RDisplay(p->next);
    }
}

int Count(struct Node *p){
    int count=0;
    
    while(p){
        count++;
        p=p->next;
    }
    return count;
}

int Sum(struct Node *p){
    int sum=0;
    while(p){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int Max(struct Node *p){
    int max=p->data;
    while(p->next){
        p=p->next;
        if(max<p->data){
            max=p->data;
        }
    }
    return max;
}

void Searching(struct Node *p,int x){
    int i=0;
    while(p){
        if(x==p->data){
            printf("Element is at index value: %d \n",i);
        }
        i++;
        p=p->next;
    }
}
int main(){
    
    int A[]={2,7,4,5,6};
    create(A,5);
    //RDisplay(first);
    //printf("%d ", Count(first));
    //printf("%d ", Sum(first));
    //printf("%d ", Max(first));
    Searching(first,4);

    return 0;
}
