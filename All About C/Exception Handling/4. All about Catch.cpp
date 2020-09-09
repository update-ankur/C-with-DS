// part 1 int catch

#include <iostream>

using namespace std;


int main()
{


    try{
        throw 1;
    }

    catch(int x){
        cout<<"error int"<<endl;
    }

    cout<<"Run Successfully"<<endl;

    return 0;
}

// part 2 double

#include <iostream>

using namespace std;


int main()
{


    try{
        throw 1.5;
    }

    catch(double x){
        cout<<"error int"<<endl;
    }

    cout<<"Run Successfully"<<endl;

    return 0;
}

// part 3 string

#include <iostream>

using namespace std;


int main()
{


    try{
        throw 1;
    }

    catch(int x){
        cout<<"error int"<<x<<endl;
    }

    catch(double x){
        cout<<"error float "<<x<<endl;
    }

    catch(string x){
        cout<<"error string"<<x<<endl;
    }


    cout<<"Run Successfully"<<endl;

    return 0;
}



// next part

#include <iostream>

using namespace std;

class exception1{

};
class exception2: public exception1{

};

int main()
{


    try{
        throw exception2();
    }

    catch(int x){
        cout<<"error int"<<x<<endl;
    }

    catch(double x){
        cout<<"error float "<<x<<endl;
    }

    catch(string x){
        cout<<"error string"<<x<<endl;
    }

    catch(exception2 x){
        cout<<"error exception1"<<endl;
    }
    // child class first then parent class
    catch(exception1 x){
        cout<<"error exception2"<<endl;
    }

    catch(...){
        cout<<" all error "<<endl;
    }
// if we put catch(...) at first catch; other catch wouldn't run; as this can execute all the throw

    cout<<"Run Successfully"<<endl;

    return 0;
}
