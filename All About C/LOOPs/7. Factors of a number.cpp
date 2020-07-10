#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the digits you want to find Factor: ";
    cin>>n;
    cout<<"Factors are: ";
    for(int i=1; i<=11; i++){

        if(n%i==0)
            cout<<i<<endl;

    }


  return 0;
}
