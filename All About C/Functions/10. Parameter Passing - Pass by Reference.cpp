#include<iostream>
using namespace std;

void swap(int &a, int &b){

  cout<<a<<" & "<<b<<endl;
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<&a<<" & "<<&b<<endl;

}


int main(){

  int x=3,y=10;
  swap(x,y);
  //we are seeing two funs..i.e main and swap; but the machine code will have one fun..i.e., Main; Swap function will be pasted here.
  cout<<&x<<" & "<<&y<<endl;
  cout<<x<<" & "<<y<<endl;
  //answer will be swapped., thats why we use pass by reference.
  return 0;
}
