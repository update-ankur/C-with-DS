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


int LinearSearch(struct Array a, int x){
    for(int i=0;i<a.length;i++){
        if(x==a.arr[i]){
            return i+1;
        }
    }
    return -1;  //for unsuccessful
}

int BinarySearch(struct Array a,int x){
    int i,j,m;
    i=0;
    j=a.length;
    while(i<=j){
        m=(i+j)/2;
        if(a.arr[m]==x){
            return m+1;//index+1 if you want index do 'm' only;
        }
        else if(x>a.arr[m]){
            i=m+1;
        }
        else{
            j=m-1;
        }
    }
    
    return -1;
}


void Get(struct Array a,int index){
    cout<<a.arr[index];
}

int main()
{
    struct Array x={{1,3,5,6},4,5};
    Get(x,2);

   return 0;
}
