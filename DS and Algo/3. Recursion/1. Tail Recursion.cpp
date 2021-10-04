#include <iostream>

using namespace std;


void tail(int n){
    if(n>0){
        cout<<n;
        tail(n-1);
    }
}


int main()
{
    tail(4);
    return 0;
}
