#include<iostream>
using namespace std;

int main(){

    int n,j,k=1;
    cout<<"Enter the digits you want to find Factorial: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        k=i*k;
        j=k;

    }
    cout<<"Sum of digits is: "<<j<<endl;


  return 0;
}
