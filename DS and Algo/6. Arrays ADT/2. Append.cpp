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



int main()
{
    struct Array x={{1,3,5,6},4,5};
    Display(x);
    cout<<endl;
    Append(&x,2);
    Display(x);

   return 0;
}
