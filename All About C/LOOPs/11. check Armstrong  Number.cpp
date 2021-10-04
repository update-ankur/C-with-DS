#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n,m,sum=0;
    cout<<"Enter your Number to check: ";
    cin>>n;
    m=n;

    for(int i=0; n>=1; i++){
          int r;
          r=n%10;
          sum= sum + r*r*r;
          n=n/10;
      }

    if(sum==m)
        cout<<"Armstrong Number";
    else
        cout<<"Not an Armstrong Number";
  return 0;
}
