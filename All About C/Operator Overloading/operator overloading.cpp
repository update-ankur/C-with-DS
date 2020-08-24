/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
    complex(int a=0, int b=0){
        real=a;
        img=b;
    }
    friend complex operator+(complex i, complex j);
    friend ostream & operator<<(ostream &o,complex k);

};

complex operator+(complex i, complex j){
    complex temp;
    temp.real=i.real+j.real;
    temp.img=i.img+j.img;
    
    return temp;
}

ostream & operator<<(ostream &o,complex k){
    o<<k.real<<"+i"<<k.img;
    return o;
}


int main()
{

    complex c1(3,4);
    complex c2(4,6);
    complex c3;
    c3=c1+c2;
    cout<<c3;

    return 0;
}
