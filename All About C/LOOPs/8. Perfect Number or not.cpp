#include<iostream>
using namespace std;

int main(){

    int n,j;
    cout<<"Enter the Number you want to check for Perfect: ";
    cin>>n;
    for(int i=1; i<=11; i++){

        if(n%i==0){

            int sum;
            sum+=i;
            j=sum;
        }
    }
    if(2*n==j)
        cout<<"it is perfect number";
    else
        cout<<"it is not a perfect number";



  return 0;
}
