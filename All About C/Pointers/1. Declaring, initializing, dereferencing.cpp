#include<iostream>
using namespace std;

int main(){

  int a=4;
  int *b=&a;      // declaring and initializing a pointer

  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<b<<endl;
  cout<<&b<<endl;
  cout<<*b<<endl;     // Dereferencing

  return 0;
}
