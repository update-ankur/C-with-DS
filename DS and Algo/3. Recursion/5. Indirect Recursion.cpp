// Fn A calls B and B calls C and C calles A i.e.. cyclic then it is known as indirect recursion

#include <iostream>
using namespace std;

void f2(int n); 

void f1(int n){

    if(n>0){

        cout<<n<<endl;
        f2(n-1);
    }
}

void f2(int n){

    if(n>0){

        cout<<n<<endl;
        f1(n/2);
    }
}



int main(){

    f1(114);

    return 0;
}