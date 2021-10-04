// we can directly calculate using factorial.cpp file
// here we will use Pascals Triangle


#include<iostream>
using namespace std;

int nCr(int n, int r){

    if(n==0||r==0||n==r){
        return 1;
    }
    else{
        return nCr(n-1,r-1)+nCr(n-1,r);
    }
}

int main(){

    cout<<nCr(5,2);

    return 0;
}