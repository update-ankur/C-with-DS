// Part 1

#include <iostream>

using namespace std;

class Car{
public:
    void start(){
        cout<<"Car Started"<<endl;
    }

};

class Inova: public Car{
    
public:
    void start(){            
        cout<<"Inova Started"<<endl;
    }

};

class Swift: public Car{
    
public:
    void start(){            
        cout<<"Swift Started"<<endl;
    }

};


int main()
{
       Car *c=new Inova();
       c->start();
       // Car Started          (as c is pointing towards Inova but it will execute car (in cpp), use virtual to use derived class over-rided functions)                                                                                       
       return 0;
}

// Part 2

#include <iostream>

using namespace std;

class Car{
public:
    virtual void start(){
        cout<<"Car Started"<<endl;
    }

};

class Inova: public Car{
    
public:
    void start(){            
        cout<<"Inova Started"<<endl;
    }

};

class Swift: public Car{
    
public:
    void start(){            
        cout<<"Swift Started"<<endl;
    }

};


int main()
{
       Car *c=new Inova();
       c->start();
       c=new Swift();
       c->start();
       return 0;
}
