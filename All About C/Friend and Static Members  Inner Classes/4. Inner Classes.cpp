#include <iostream>

using namespace std;

class outer{
    public:

    void fun(){

            i.display();

    }

    class inner{
      public:
      void display(){
          cout<<"dispay of inner"<<endl;
      }
    };

    inner i;


};


int main()
{
    outer::inner i;

   return 0;
}
