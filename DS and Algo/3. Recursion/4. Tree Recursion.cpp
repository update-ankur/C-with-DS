#include <iostream>
using namespace std;

// Linear Recurssion: Recurssive fn calls itself once only
// Tree Recurssion: Recurssive fn calls itself more than once 


int f(int n){

    if(n>0){
        cout<<n<<endl;
        f(n-1);
        f(n-1);
    }

}


int main(){

    f(3);

    return 0;
}