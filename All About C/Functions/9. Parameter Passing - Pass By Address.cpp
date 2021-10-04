#include<iostream>
using namespace std;

void swap(int *a, int *b){

  cout<<*a<<" & "<<*b<<endl;
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  cout<<*a<<" & "<<*b<<endl;

}


int main(){

  int x=3,y=10;
  swap(&x,&y);
  cout<<x<<" & "<<y<<endl;
  //answer will be swapped., thats why we use pass by address.
  return 0;
}
