// Part 1:
#include <iostream>

using namespace std;

class base{
    
public:
    void fun(){
        cout<<"fun of base"<<endl;
    }

};

class derived: public base{
    
public:
    void fun(){            
        cout<<"fun of derived"<<endl;
    }

};


int main()
{
        derived d;
        base *b=&d;
        b->fun();
        return 0;
}

// in cpp fun of pointer will be executed., in java object class fun is called.

// Part 2:
// Using virtual

#include <iostream>

using namespace std;

class base{
    
public:
    virtual void fun(){
        cout<<"fun of base"<<endl;
    }

};

class derived: public base{
    
public:
    void fun(){            
        cout<<"fun of derived"<<endl;
    }

};


int main()
{
        derived d;
        base *b=&d;
        b->fun();
        return 0;
}

// in cpp we have special word 'virtual' to execute fun of object class using pointer.
