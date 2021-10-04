#include<iostream>
using namespace std;

int * fun(){
  int *a=new int[5];
  for(int i=1;i<=5;i++){
    a[i]=2+3*i;
  }
  cout<<a<<endl;
  return a;
}


int main(){

  int *p= fun();
  for(int i=1;i<=5;i++){
    cout<<p[i]<<endl;
  }
  cout<<p<<endl;
  return 0;
}


// We will have same address; but now the control is in p's hand;
//p is pointing now at heap memory created by pointer a.
