#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter a num to print number upto that: ";
  cin>>n;
  for(int i=0;i<n; i++){
    //we used int i=0 which is inside for loop., this type of declaration is known as Dynamic declaration
    cout<<i<<endl;
  }


  return 0;
}
//compund statement:: conditional statement with && or ||
