#include<iostream>
using namespace std;

int main(){

int A[]{1,2,3,4,5,6};
int *p=A;
//base address of A is given to pointer P.

cout<<*p<<endl;
cout<<p<<endl;
// output will be 1 and address


p++;    //writing *p++ is not necessory.
cout<<*p<<endl;         // * is used for derefrencing, it will print address without *
cout<<p<<endl;
// output will be next digit with address, In pointer value shift either left or right., and value doesn't increment or decrement using ++ or --.
//output = 2

p--;    //writing *p++ is not necessory.
cout<<*p<<endl;
cout<<p<<endl;
// output =1 with address


cout<<*p<<endl;
cout<<*(p+2)<<endl;
// *p = let  say 1., then *(p+2)=3



  return 0;
}
