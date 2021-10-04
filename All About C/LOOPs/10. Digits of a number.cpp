#include<iostream>
using namespace std;

int main(){

    int r,n;
    cout<<"Enter your Number to print digits: ";
    cin>>n;

//    for(int i=0; n>=1; i++){
//          r=n%10;
//          cout<<r<<endl;
//          n=n/10;
//      }

    while(n>=1){
        r=n%10;
        cout<<r<<endl;
        n=n/10;
    }


  return 0;
}
