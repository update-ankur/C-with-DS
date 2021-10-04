#include<iostream>
using namespace std;

int F1(int n){

    if(n==0||n==1){
        return n;
    }
    else{
        return F1(n-1)+F1(n-2);
    }
    
}
int main(){

    cout<<F1(3);

    return 0;
}

//excessive recursion
//O(n^2)
