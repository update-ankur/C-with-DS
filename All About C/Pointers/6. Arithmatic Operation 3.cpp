#include<iostream>
using namespace std;

int main(){

int A[]{1,2,3,4,5,6};
int *p=A, *q=&A[4];
//base address of A is given to pointer P.
// pointer q will have hold the address of A[4];

cout<<p-q;

// if -ve ; meaning q is far away from p, and p is in beginning
// if +ve ; meaning p is far away from q, and q is in beginning
// we can also know we pointer is first and which is second.
// here p is first pointer and and q is second pointer.

  return 0;
}
