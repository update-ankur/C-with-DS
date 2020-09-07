// part 1
#include <iostream>

using namespace std;

class base{
    
public:
    void display(){
        cout<<"Display of base"<<endl;
    }

};

class derived: public base{
    
public:
    void display(){                     //function over-riding
        cout<<"Display of derived"<<endl;
    }

// if you have done  void display(int x) then this would be function over-loading
};


int main()
{
        derived d;
        d.display();
 //     d.display(1); in case of over-loading
        return 0;
}

// Obervation: same protype of function display in both base and derived class, this is called as funtion over-riding

// part 2
#include <iostream>

using namespace std;

class base{
    
public:
    void display(){
        cout<<"Display of base"<<endl;
    }

};

class derived: public base{
    
public:
    void display(int x){                     //function over-riding
        cout<<"Display of derived"<<endl;
    }

// if you have done  void display(int x) then this would be function over-loading
};


int main()
{
        derived d;
        d.display(1); // in case of over-loading
        return 0;
}



// part 3
#include <iostream>

using namespace std;

class base{
    
public:
    void display(){
        cout<<"Display of base"<<endl;
    }

};

class derived: public base{
    
public:
    void display(int x){
        cout<<"Display of derived"<<endl;
    }
// if you have done  void display(int x) then this would be function over-loading
};


int main()
{
        derived d;
        d.base::display();  // we can access base class using scope resolution '::'
        return 0;
}



