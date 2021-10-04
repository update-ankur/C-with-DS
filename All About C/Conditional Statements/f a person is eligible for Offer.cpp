#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter your Age to check.. ";
  cin>>n;

  if(n<=8 || n>=50)
    cout<<"Eligible";
  else
    cout<<"Not Eligible";

  return 0;
}
//compund statement:: conditional statement with && or ||
