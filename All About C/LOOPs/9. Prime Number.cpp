#include<iostream>
using namespace std;

int main(){

    int n, count;
    cout<<"Enter the number you want to check for Prime: ";
    cin>>n;
    for(int i=1; i<=11; i++){
        if(n%i==0){
            int j;
            j++;
            count=j;
        }
    }
    if(count==2)
        cout<<"Prime Number";
    else
        cout<<"Not a Prime Number";

  return 0;
}
