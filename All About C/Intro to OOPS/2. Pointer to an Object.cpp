//-----------------------type 1----------------------------//


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
rectangle *p;
p=&r;

p->lengh=10;          //"-> is an derefrencing operator"
p->width=5;

cout<<p->area()<<endl;
cout<<p->perimeter()<<endl;

  return 0;
}

//-----------------------type 2----------------------------//


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

rectangle *p= new rectangle;          //this time dyanamically

p->lengh=10;          //"-> is an derefrencing operator"
p->width=5;

cout<<p->area()<<endl;
cout<<p->perimeter()<<endl;

  return 0;
}
