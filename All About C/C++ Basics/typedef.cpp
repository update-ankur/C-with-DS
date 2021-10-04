// when we write a legthy program we use some variable which we can forget after a period of time., So we Use
// typedef, Proram Becomes more readable;

#include<iostream>
using namespace std;

typedef int marks;

int main(){

  marks m1, m2;       // int m1,m2 can also be written but for readiability we can use typedef, as it helps in understanding a long program.
  m1= 40;
  m2= 44;
  cout<<m1<<" "<<m2<<endl;

  return 0;
}
