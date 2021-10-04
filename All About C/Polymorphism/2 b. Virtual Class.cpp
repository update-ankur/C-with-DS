// Part 1

#include <iostream>

using namespace std;

class BasicCar{
    
public:
    void start(){
        cout<<"BasicCar Started"<<endl;
    }

};

class AdvanceCar: public BasicCar{
    
public:
    void start(){            
        cout<<"AdvanceCar Started"<<endl;
    }

};


int main()
{
       BasicCar *b=new AdvanceCar();
       b->start();
       // basic car pointer pointing at advance car object, so advance class object should work; but in cpp it's not like this,
       // we have separate 'virtual' function to do so.
        return 0;
}


// Part 2

#include <iostream>

using namespace std;

class BasicCar{
    
public:
    virtual void start(){
        cout<<"BasicCar Started"<<endl;
    }

};

class AdvanceCar: public BasicCar{
    
public:
    void start(){            
        cout<<"AdvanceCar Started"<<endl;
    }

};


int main()
{
       BasicCar *b=new AdvanceCar();
       b->start();
       return 0;
}
