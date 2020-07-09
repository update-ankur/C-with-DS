#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter Hour to check.. ";
  cin>>n;

  if(n>=8 && n<=18)
    cout<<"Working Hour";
  else
    cout<<"Leisure Time";

  return 0;
}
//compund statement:: conditional statement with && or ||
