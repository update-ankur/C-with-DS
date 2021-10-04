// in this we will see all kind of func for class rectangle;
//we will declare the dunction inside the class and implement them outside the class.

#include<iostream>
using namespace std;


class rectangle{
private:
  int lengh;
  int width;
public:
// defining a constuctor; constuctor will have same name as of class.

rectangle();                      //constuctor
rectangle(int l, int w);          //constuctor
rectangle(rectangle &r);          //constuctor
void setLength(int l);            // mutators (modifying the property)
void setWidth(int w);             // mutators (modifying the property)
int getLength(){return lengh;}    // Accessors (reading the property);    //inline
int getWidth(){return width;}     // Accessors (reading the property)     //inline
int area();             //facilitator
int perimeter();        //facilitator
bool isSquare();        // enquiry
~rectangle();           // distructor
};

int main(){

rectangle r;
rectangle p(10,5);
rectangle q(p);
cout<<r.area()<<endl;
cout<<p.area()<<endl;
cout<<p.isSquare()<<endl;
cout<<q.area()<<endl;

return 0;
}

rectangle::rectangle(){                      // constuctor don't have return type..      1) default or Non parameterized constuctor.
  lengh=1;
  width=1;
}

rectangle::rectangle(int l, int w){                                      //          2) parameterized constuctor.
//  lengh=1;    don't use these as length & width can be -ve also.
//  width=1;
setLength(l);
setWidth(w);
}
void rectangle::setLength(int l){
    if(l<0)
        lengh=0;
    else
        lengh=l;
  }
void rectangle::setWidth(int w){
    if(w<0)
      width=0;
    else
      width=w;
  }

int rectangle::area(){
    return lengh*width;
  }
int rectangle::perimeter(){
    return 2*(lengh+width);
  }
rectangle::rectangle(rectangle &r){
  lengh=r.lengh;
  width=r.width;
}
bool rectangle::isSquare(){
  return lengh==width;
}
rectangle::~rectangle(){
  cout<<"distructed the class"<<endl;
}
