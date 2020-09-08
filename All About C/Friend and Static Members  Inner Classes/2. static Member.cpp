#include <iostream>

using namespace std;

class Test{
  public: int a;
  static int count;

  Test(){
      a++;
      count++;
  }

  static int getcount(){
      // a static function can access only static data member
      // here we can't use 'a';
      return count;
  }

 //static data members are globlly used;
 };

int Test::count=0;

int main()
{
   Test t1,t2;
   cout<<t1.count<<endl;
   cout<<t2.count<<endl;
   // value will be same as it is created globlly not for individual class.
   t1.count=5;
   cout<<t1.count<<endl;
   cout<<Test::count<<endl;
   // it shows that static data member can be used using object of a class or direct by class using scope resolution.
    return 0;
}
