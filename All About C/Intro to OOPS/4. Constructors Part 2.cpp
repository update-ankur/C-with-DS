// Let's use 2nd type of User-define constuctor,

#include<iostream>
using namespace std;


class rectangle{
private:
  int lengh;
  int width;
public:
// defining a constuctor; constuctor will have same name as of class.

rectangle(){                      // constuctor don't have return type..      1) default or Non parameterized constuctor.
  lengh=1;
  width=1;
}

    rectangle(int l, int w){                                      //          2) parameterized constuctor.
//  lengh=1;    don't use these as length & width can be -ve also.
//  width=1;
setLength(l);
setWidth(w);
}


  void setLength(int l){
    if(l<0)
        lengh=0;
    else
        lengh=l;
  }
  void setWidth(int w){
    if(w<0)
      width=0;
    else
      width=w;
  }
  int getLength(){
    return lengh;
  }
  int getWidth(){
    return width;
  }

  int area(){
    return lengh*width;
  }
  int perimeter(){
    return 2*(lengh+width);
  }
};

int main(){

rectangle r;
rectangle p(10,5);
cout<<r.area()<<endl;
cout<<p.area()<<endl;
return 0;
}
