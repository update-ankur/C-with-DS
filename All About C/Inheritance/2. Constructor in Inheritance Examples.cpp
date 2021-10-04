#include <iostream>

using namespace std;

class Base{
    public:
    Base(){
        cout<<"Default constructor of base class "<<endl;
    }
    Base(int x){
        cout<<"Parameterize constructor of base class "<<x<<endl;
    }
};
class Derived: public Base{
  public:
  Derived(){
      cout<<"Default constructor of Derived class "<<endl;
  }
  Derived(int j){
      cout<<"Parameterize constructor of Derived Class "<<endl;
  }
  Derived(int l,int m):Base(l){
      cout<<"Parameterize constructor of Derived Class "<<m<<endl;
  }
};

int main()
{

    //Derived a;
    //Derived b(3);
    Derived b(3,5);
  
    
    return 0;
}
