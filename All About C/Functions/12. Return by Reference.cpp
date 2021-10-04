#include<iostream>
using namespace std;

int & fun(int &a){
return a;
}


int main(){

int x=3;

//fun(x);     this becomes reference of local variable x in this case; so we can assign vale to this also.
fun(x)=59;
cout<<x;
//this is only time when fun is on l side.

  return 0;
}
