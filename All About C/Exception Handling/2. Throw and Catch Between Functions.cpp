#include <iostream>

using namespace std;

int division(int x,int y){
    if(y==0){
        throw "Error 1";
    }
}

int main()
{
    int x=5,y=0,z;      //try y=2 also

    try{
        z=division(x,y);
        cout<<z<<endl;
    }

    catch(char const* x){
        cout<<"Division by Zero "<<x<<endl;
    }

    cout<<"Run Successfully"<<endl;

    return 0;
}
