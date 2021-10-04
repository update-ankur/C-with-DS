/* findind real roots */

#include<iostream>
#include<cmath>

using namespace std;
int main(){

  float a,b,c,r;
  cout<<"Enter three constants of Quadratic Eqn from left to right: ";
  cin>>a>>b>>c;
  r=sqrt(pow(b,2)-4*a*c);
  cout<<"roots are: "<<(-b+r)/(2*a)<<" and "<<(-b-r)/(2*a);

  return 0;
}
