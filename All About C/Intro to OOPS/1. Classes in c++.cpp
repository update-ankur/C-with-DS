#include<iostream>
using namespace std;


class rectangle{
public:                                     // it's public here in this case.
  int lengh;
  int width;

  int area(){
    return lengh*width;
  }
  int perimeter(){
    return 2*(lengh+width);
  }
};                                          //remember to put ; after the class.

int main(){

rectangle r;    //Creating a object of rectangle.

r.lengh=10;
r.width=20;

cout<<r.area()<<endl;
cout<<r.perimeter()<<endl;
  return 0;
}
