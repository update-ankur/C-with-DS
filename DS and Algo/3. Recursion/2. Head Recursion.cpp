#include <iostream>

using namespace std;


void tail(int n){
    if(n>0){
        tail(n-1);
        cout<<n;
    }
}


int main()
{
    tail(4);
    return 0;
}
