#include <iostream>

using namespace std;


int main()
{
    int x=5,y=0,z;      //try y=2 also

    try{
        if(y==0){
            throw "Error 101";
        }
        z=x/y;
        cout<<z<<endl;
    }

    catch(char const* x){
        cout<<"Division by Zero "<<x<<endl;
    }

    cout<<"Run Successfully"<<Endl;

    return 0;
}
