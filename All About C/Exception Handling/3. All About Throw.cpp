// part 1 throw string

#include <iostream>

using namespace std;

int division(int x,int y){
    if(y==0){
        throw  1.5;
    }
}

int main()
{
    int x=5,y=0,z;      //try y=2 also

    try{
        z=division(x,y);
        cout<<z<<endl;
    }

    catch(float x){
        cout<<"Division by Zero "<<x<<endl;
    }

    cout<<"Run Successfully"<<endl;

    return 0;
}


// part 2  throw double

#include <iostream>

using namespace std;

int division(int x,int y){
    if(y==0){
        throw  1.5;
    }
}

int main()
{
    int x=5,y=0,z;      //try y=2 also

    try{
        z=division(x,y);
        cout<<z<<endl;
    }

    catch(double x){
        cout<<"Division by Zero "<<x<<endl;
    }

    cout<<"Run Successfully"<<endl;

    return 0;
}


// part 3 throw object of class

#include <iostream>

using namespace std;

class fun_throw         // you can inherit from build in class 'exception'; i.e.. class fun_throw: exception
{

};



int main()
{
    int x=5,y=0,z;      //try y=2 also

    try{
        if(y==0)
            throw fun_throw();
        z=x/y;
        cout<<z<<endl;
    }

    catch(fun_throw x){
        cout<<"Division by Zero "<<endl;
    }

    cout<<"Run Successfully"<<endl;

    return 0;
}

// part 4

#include <iostream>

using namespace std;

class fun_throw{

};

int division(int x, int y)
{
    if(y==0)
        throw fun_throw();
    return x/y;
}


int main()
{
    int x=5,y=2,z;      //try y=2 also

    try{
        z=division(x,y);
        cout<<z<<endl;
    }

    catch(fun_throw x){
        cout<<"Division by Zero "<<endl;
    }

    cout<<"Run Successfully"<<endl;

    return 0;
}

// part 5

#include <iostream>

using namespace std;

class fun_throw{

};

int division(int x, int y)throw(fun_throw)
{
// if there is no throw we can change this like int division(int x, int y)throw()
// if there is throw of type 'int' we can share this like int division(int x, int y)throw(int)

    if(y==0)
        throw fun_throw();
    return x/y;
}


int main()
{
    int x=5,y=2,z;      //try y=2 also

    try{
        z=division(x,y);
        cout<<z<<endl;
    }

    catch(fun_throw x){
        cout<<"Division by Zero "<<endl;
    }

    cout<<"Run Successfully"<<endl;

    return 0;
}
