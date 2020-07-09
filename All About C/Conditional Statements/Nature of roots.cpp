#include<iostream>
#include<cmath>
using namespace std;

int main(){

  float a,b,c,d;
  cout<<"enter a,b,c of polynomial: ";
  cin>>a>>b>>c;
  d= (b*b) - (4*a*c);
  if(d==0){
    cout<<"roots are real and equal"<<endl;
    cout<<"roots are "<<(-b+sqrt(d))/(2*a);
    }
  else if(d>0){
    cout<<"roots are real and unequal"<<endl;
    cout<<"roots are "<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a);
    }
  else
    cout<<"roots are imaginary";

  return 0;
}
