#include <iostream>
using namespace std;

int f(int n){

    if(n>80){
        return n-10;
    }
    else{
        return f(f(n+15));
    }
}


int main(){

    cout<<f(70);

    return 0;
}