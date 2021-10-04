// Part 1
#include <iostream>
using namespace std;

int f(int n){

    if(n>0){
        return f(n-1)+n;        // creates activation record in stack section
    }
}
int main(){

    int a=f(5);
    cout<<a;
    return 0;
}

// Part 2
#include <iostream>
using namespace std;

int fs(int n){
    static int x=0;         // stores in code section 
    if(n>0){
        x++;
        return fs(n-1)+x;
    }
}
int main(){

    int a=fs(5);
    cout<<a;
    return 0;
}