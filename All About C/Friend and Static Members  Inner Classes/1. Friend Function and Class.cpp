// part 1:: Friend function



#include <iostream>

using namespace std;

class my{
  public: int a;
  protected: int b;
  private: int c;
  friend void check();
};

void check(){
    my m;
    m.a=5;
    m.b=3;
    m.c=2;
    //without using friend this function will not be able to access protected and private members
}

int main()
{
    cout<<"Hello World";

    return 0;
}




// part 2 Friend Class


#include <iostream>

using namespace std;

class yours;        // 2. let's declare before assigning using in class my i.e.. it will show some error if not declared and used.
class my{
  public: int a;
  protected: int b;
  private: int c;
  friend yours;     // 1. otherwise yours will not be able to access protected & private members.

};

class yours{

  public:
        my m;
        void fun(){
        m.a=5;
        m.b=7;
        m.c=3;
        }
};


int main()
{
    cout<<"Hello World";

    return 0;
}
