#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n,m;
    cout<<"Enter your Number to reverse: ";
    cin>>n;
    cout<<"Reversed Digit"<<endl;

//    for(int i=0; n>=1; i++){
//          int r;
//          r=n%10;
//          n=n/10;
//          cout<<r;
//      }

    while(n>=1){
        int r;
        r=n%10;
        n=n/10;
        cout<<r;
    }


  return 0;
}
