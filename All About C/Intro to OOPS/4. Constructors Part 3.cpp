// Let's use 3rd type of User-define constuctor, which is copy constuctor.

#include<iostream>
using namespace std;


class rectangle{
private:
  int lengh;
  int width;
public:
// defining a constuctor; constuctor will have same name as of class.

/*
rectangle(){                      // constuctor don't have return type..      1) default or Non parameterized constuctor.
  lengh=1;
  width=1;
}
*/
rectangle(int l=1, int w=1){                                         //       2) parameterized constuctor.
//  lengh=1;    don't use these as length & width can be -ve also.
//  width=1;
//defaut value are set, so that for no value it can assign 1; for any given value
setLength(l);
setWidth(w);
}

rectangle(rectangle &r){
  lengh=r.lengh;
  width=r.width;
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

rectangle q(10,5);
rectangle p(q);

cout<<p.area()<<endl;

return 0;
}
