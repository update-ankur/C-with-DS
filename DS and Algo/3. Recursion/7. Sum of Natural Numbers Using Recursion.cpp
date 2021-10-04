#include<iostream>
using namespace std;

int Sum(int n){

    if(n>0){
        return Sum(n-1)+n;
    }

}

int main(){

    cout<<Sum(10);

    return 0;
}


// we can directly use formula 
// also using iteration
