#include<iostream>
using namespace std;

int main(){

    int a=5;
    int &b=a;           // reference need to be initialize at the time of declaration.
    // You can't assign b to anythig later on in this function.


    cout<<a<<endl;
    a++;
    b++;
    cout<<a<<endl;

    cout<<"Address of A= "<<&a<<" & "<<"Address of B= "<<&b;
    //reference is just another name to same variable to which it is refering.
    //Hence will have same address.


  return 0;
}
