#include<iostream>
using namespace std;

struct Fun
{
// a struct is public(can be accessed) but a class is private unless it is being told to public
      int x;
      int y;
      int addition(){
      return x+y;
    }
};

int main(){

  Fun s;
  s.x=2;
  s.y=3;
  cout<<s.addition()<<endl;

  return 0;
}


// struct in c contains data point only, while in c++ it can contain functions
