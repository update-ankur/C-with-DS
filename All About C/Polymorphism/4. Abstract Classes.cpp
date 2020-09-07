// Part 1

#include <iostream>
using namespace std;

class Base{
public:
    void fun1(){
        cout<<"Fun1 of base"<<endl;
    }
    void fun2(){
        cout<<"Fun2 of base"<<endl;
    }
};

class Derived: public Base{
public:
    void fun1(){
        cout<<"Fun1 of Derived"<<endl;
    }
    void fun2(){
        cout<<"Fun2 of Derived"<<endl;
    }
};

int main()
{
       Base *b=new Derived();
       b->fun1();
       // in cpp this happens
       return 0;
}

// part 2. (Virtual Function)

#include <iostream>
using namespace std;

class Base{
public:
    virtual void fun1(){        // we have to make this function virtual to achive polymorphism
        cout<<"Fun1 of base"<<endl;
    }
    void fun2(){
        cout<<"Fun2 of base"<<endl;
    }
};

class Derived: public Base{
public:
    void fun1(){
        cout<<"Fun1 of Derived"<<endl;
    }
};

int main()
{
       Base *b=new Derived();
       b->fun1();
       return 0;
}

//part 3 Pure virtual Function and abstact class

#include <iostream>
using namespace std;

class Base{
public:
    virtual void fun1()=0; // pure virtual function; we must have make this function over-ride;
                            // otherwise Derived class also become abstract class.
    void fun2(){
        cout<<"Fun2 of base"<<endl;
    }
};
//this class became abstract class as it contains pure virtual funtion; 
// here purpose of base class is to achieve reusebility(non-virtual fun) and Polymorphism(virtual function).

class Derived: public Base{
public:
    void fun1(){
        cout<<"Fun1 of Derived"<<endl;
    }
};

int main()
{
       Base *b=new Derived();
       b->fun1();
       return 0;
}

// part 4:: abstact class
#include <iostream>
using namespace std;

class Base{
public:
    virtual void fun1()=0; 
    virtual void fun2()=0;
};
// Now the purpose of this class is to only achieve polymorphism.

class Derived: public Base{
public:
    void fun1(){
        cout<<"Fun1 of Derived"<<endl;
    }
    void fun2(){
        //we need to define this fun2; as this is pure virtual fun in base class
    }
};

int main()
{
       Base *b=new Derived();
       b->fun1();
       b->fun2();   // contains nothing; 
       return 0;
}


// A class is abstract class if it contains atleast one pure virtual function.
