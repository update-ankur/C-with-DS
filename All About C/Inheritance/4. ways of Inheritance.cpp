case 1:

#include <iostream>

using namespace std;
class parent{
  private: int a;
  protected: int b;
  public: int c;
  
  void funParent(){
      a=4; 
      b=3;
      c=6;
  }
};
class child:public parent{
  
  void funChild(){
     // a=4; error: ‘int parent::a’ is private within this context
      b=3;
      c=6;
  }
  
};

class Grandchild:public child{
  
  void funGrandchild(){
    //  a=4;
      b=3;
      c=6;
  }
  
};
    
  


int main()
{
    child c;
       // c.a=2; object can't access private member
   // c.b=8; object can't access protected member
   c.c=10;
    return 0;
}




Case 2:

#include <iostream>

using namespace std;
class parent{
  private: int a;
  protected: int b;
  public: int c;
  
  void funParent(){
      a=4; 
      b=3;
      c=6;
  }
};
class child:protected parent{
  
  void funChild(){
    //  a=4; error: ‘int parent::a’ is private within this context
      b=3;
      c=6;
    // all inherited things will come under protected section, and this class can access these protected things
    // but the object of this class will be able to access only public as their is no public things here so
    // object will not be able to access any of the protected element
  }
  
};

class Grandchild:public child{
  
  void funGrandchild(){
    //  a=4;
      b=3;
      c=6;
  }
  
};
    
  


int main()
{
    child c;
       // c.a=2; object can't access private member
   // c.b=8; object can't access protected member
   // c.c=10;  object can't access protected member
    return 0;
}




case 3:

#include <iostream>

using namespace std;
class parent{
  private: int a;
  protected: int b;
  public: int c;
  
  void funParent(){
      a=4; 
      b=3;
      c=6;
  }
};
class child:private parent{
  
  void funChild(){
    //  a=4; error: ‘int parent::a’ is private within this context
      b=3;
      c=6;
    // all inherited things will come under private section, and this class can access these private things
    // but the object of this class will be able to access only public as their is no public things here so
    // object will not be able to access any of the protected element
    
  }
  
};

class Grandchild:public child{
  
  void funGrandchild(){
    //  a=4;
     // b=3;
     // c=6;
  }
  
// as Grandchild class inheriting everything from child class which itself is inheriting from parent class privately,
// so no element which are inherited will be accessible in Grandchild class
  
};
    
  


int main()
{
    child c;
       // c.a=2; object can't access private member
   // c.b=8; object can't access protected member
   // c.c=10;  object can't access protected member
    return 0;
}
