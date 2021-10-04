/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class base{
    public:
    void display(){
        cout<<"Display of Base"<<endl;
    }
};

class derived:public base{
    public:
    void show(){
        cout<<"Show of derived"<<endl;
    }
};

int main()
{

    base b;
    b.display();
    derived c;
    c.display();
    c.show();

    return 0;
}



/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class base{
    public:
    int a;                  // intially have garbage value
    void display(){
        cout<<"Display of Base "<<a<<endl;
    }
};

class derived:public base{
    public:
    void show(){
        cout<<"Show of derived"<<endl;
    }
};

int main()
{

   derived x;
   //x.display();  uncomment to check value of garbage
   x.a=5;
   x.show();
   x.display();
   

    return 0;
}









