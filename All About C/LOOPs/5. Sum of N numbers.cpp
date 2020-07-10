#include<iostream>
using namespace std;

int main(){

    int n,j;
    cout<<"Enter total number of digits you want to add: ";
    cin>>n;
    cout<<"Enter Your Numbers: "<<endl;
    for(int i=0; i<n; i++){

      int k;

      cin>>k;
      j=j+k;
    }
    cout<<"Sum of digits is: "<<j<<endl;


  return 0;
}
