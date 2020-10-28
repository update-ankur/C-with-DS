#include <iostream>

using namespace std;

struct Array{
    int arr[20];
    int length;         //num of element
    int size;           //capacity
};

void Display(struct Array a){
    for(int i=0;i<a.length;i++){
        cout<<a.arr[i]<<" ";
    }
    
}

// we are using syntax of c; replace '->' with '.' in c++
void Append(struct Array *a,int x){
    if(a->length<a->size){
        a->arr[a->length++]=x;
    }
}

void insert(struct Array *a,int p,int v){
    int i=0;
    for(i=a->length;i>=p;i--){
        a->arr[i+1]=a->arr[i];
    }
    a->arr[p]=v;
    //now length will also upgrade
    a->length++;
}

void Delete(struct Array *a,int p){
    for(int i=p;i<a->length;i++){
        a->arr[i]=a->arr[i+1];
    }
    a->length--;
}


int main()
{
    struct Array x={{1,3,5,6},4,5};
    Display(x);
    cout<<endl;
    Append(&x,2);
    Display(x);
    cout<<endl;
    insert(&x,2,2);
    Display(x);
    cout<<endl;
    Delete(&x,4);
    Display(x);

   return 0;
}
