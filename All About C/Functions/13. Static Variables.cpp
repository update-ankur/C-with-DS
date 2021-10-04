#include<iostream>
using namespace std;

int yolo(){

    //the static will not initialise again and again; whenever function will be called.

    static int k=10;                // located in codesection
    int a=5;                        // located in stack section
    k++;
    cout<<a<<endl;                  //this will initialise again and again; whenever function will be called.
    cout<<k<<endl;

    return 0;
}
int main(){
    // static variable gets memory in code section, not in heap or stack; so once machine code loaded it will not initialise static variable again and again.

    yolo();
    yolo();
    yolo();

    return 0;
}
