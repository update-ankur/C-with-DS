#include <stdio.h>
#include <stdlib.h>

struct Node{
  
    int data;
    struct Node *next;
    
}*first=NULL, *second=NULL,*third=NULL,*last=NULL;    //global pointer

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

void create2(int A[], int n){
    int i;
    struct Node *t,*last;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=A[0];
    second->next=NULL;
    last=second;
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
        }
        i++;
        p=p->next;
    }
}

int RSearching(struct Node *p, int x){
    static int i=0;
    if (p==NULL) {
        return -1;
    }
    if (p->data == x) {
        return i;
    }
    i++;
    return RSearching(p->next, x);
}

void Insert(struct Node *p,int index, int value){
    struct Node *t;
    if(index<0 || index>Count(p)){
        return;
    }
    
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=value;
    
    if(index==0){
        t->next=first;
        first=t;
    }
    
    else if(index>0){
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

void InsertLast(struct Node *p,int value){   // to understand better think *p is first pointer
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    t->data=value;
    t->next=NULL;
    if(first==NULL){
        first=last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}

/*
void InsertSorted(struct Node *first,int value){
    struct Node *new=(struct Node *)malloc(sizeof(struct Node));
    new->data=value;
    for(int i=0;i<=Count(first);i++){
        if(first->data<new->data && first->next->data>new->data){
            new->next=first->next;
            first->next=new;
            break;
        }
        else if (first==NULL){
            first->next=new;
            new->next=NULL;
        }
        else{
            first=first->next;
        }
    }
}
*/

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

/*
int isSorted(struct Node *p){
    int increasing=0,decreasing=0;
    printf("%d \n",Count(p));
    for (int i=1;i<Count(p); i++) {
        if(p->data>=p->next->data){
            decreasing++;
            p=p->next;
        }
        else{
            increasing++;
            p=p->next;
        }
    }
    printf("%d \n",increasing);
    printf("%d \n",decreasing);

    if (increasing == Count(p)-1|| decreasing==Count(p)-1) {
        return 1;
    }
    else{
        return -1;
    }
}
*/

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

void removeDuplicate(struct Node *p){
    struct Node *q;
    q=p->next;
    while(q){
        if(q->data==p->data){
            p->next=q->next;
            free(q);
            q=p->next;
        }
        else{
            p=q;
            q=q->next;
        }
    }
    
}


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

void RecursiveReverse(struct Node *q,struct Node *p){

    if(p){
        RecursiveReverse(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}


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

void Merge(struct Node *p,struct Node *q){
    struct Node *last;
    if(p->data>q->data){
        third=last=q;
        q=q->next;
        last->next=NULL;
        
    }
    else{
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data>q->data){
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
        else{
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
    }
    if (p) {
        last->next=p;
    }
    else{
        last->next=q;
    }
}

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
        

int main(){
    /* 1
    int A[]={2,7,4,5,6};
    create(A,5);
    Display(first);
    printf("\n");
    Insert(first,2, 19);
    Display(first);
     */
    /* 2
    Insert(first, 0, 2);
    Insert(first, 1, 4);
    Insert(first, 2, 6);
    Insert(first, 3, 8);
    Display(first);
     */
    
    /* 3
    InsertLast(first,2);
    InsertLast(first,4);
    InsertLast(first,6);
    Display(first);
     */
    /*
    int A[]={2,3,4,6,8};
    create(A, 5);
    InsertSorted(first, 5);
    InsertSorted(first, 7);
    Display(first);
    */
    /*
    int A[]={2,3,4,6,8};
    create(A, 5);
    Delete(first,1);
    Delete(first,1);
    Delete(first,1);
    Display(first);
     */
    /*
    int A[]={2,3,4,6,8};
    create(A, 5);
    Delete(first,3);
    Display(first);
     */
    /*
    int A[]={2,3,6,1,8};
    create(A, 5);
    printf("%d ",isSorted(first));
    */
    /*
    int A[]={2,3,3,3,8};
    create(A, 5);
    removeDuplicate(first);
    Display(first);
    return 0;
    */
    /*
    int A[]={2,3,4,6,8};
    create(A, 5);
    Display(first);
    printf("\n");
    RecursiveReverse(NULL,first);
    Display(first);
     */
    /*
    int A[]={2,3,4,6,8};
    create(A, 5);
    Display(first);
    printf("\n");
    int B[]={10,3,4,6,8};
    create2(B, 5);
    Display(second);
    printf("\n");
     */
    /*
    Concat(first, second);
    Display(third);
    printf("\n");
     */
    /*
    int A[]={2,3,4,6,8};
    create(A, 5);
    Display(first);
    printf("\n");
    int B[]={10,114,115,116,121};
    create2(B, 5);
    Display(second);
    printf("\n");
    Merge(first, second);
    Display(first);
    printf("\n");
     */
    /*
    struct Node *l,*m;
    int B[]={10,114,115,116,121};
    create(B, 5);
    l=first->next;
    m=first->next->next->next->next;
    m->next=l;
    
    CheckLoop(first);
    */
    

}
