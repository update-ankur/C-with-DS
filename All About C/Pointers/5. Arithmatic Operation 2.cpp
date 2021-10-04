#include<iostream>
using namespace std;

int main(){

int A[]{1,2,3,4,5,6};
int *p=A;                             ////base address of A is given to pointer P.

cout<<p<<endl;                                        // To check the address----------(i)
for(int i=0; i<6; i++){

//  cout<<A[i]<<endl;
//  cout<<i[A]<<endl;     this also work.
//  cout<<*(A+i)<<endl;     this also work.
//  cout<<(A+i)<<endl;     this also work. Print outs the addresses.
//  cout<<(p+i)<<endl;     this also work. Print outs the addresses.
//  cout<<*(p+i)<<endl;     this also work.
//  cout<<p[i]<<endl;    this also work.
    cout<<*p<<endl;   //  {this
          p++;        // also work}
}
cout<<p<<endl;                                        // To check the address as value changes, location address will change----------(ii)

  return 0;
}
