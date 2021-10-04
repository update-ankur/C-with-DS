#include<iostream>
using namespace std;

int main(){

  int a=6, b=8, i=2;
  if(a>b && ++i<b)
  {

  }
  cout<<i<<endl; //a>b failed so it will not go to second situation here. we are using "and" operator.

  if(a>b || ++i<b)
  {

  }
  cout<<i<<endl; //a>b failed but it will  go to second situation here and execute that to increment. we are using "or" operator.

  return 0;
}
