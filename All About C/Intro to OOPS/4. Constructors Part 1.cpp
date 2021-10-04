// Let's check area without giving any length and width



#include<iostream>
using namespace std;


class rectangle{
private:                                  // as a policy of object orientation the data of a class must be hidden.
  int lengh;
  int width;
public:
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
  // the setWidth & setLength funcs are known as mutators.
  int getLength(){
    return lengh;
  }
  int getWidth(){
    return width;
  }
  // the getWidth & getLength funcs are known as Accessors.
  int area(){
    return lengh*width;
  }
  int perimeter(){
    return 2*(lengh+width);
  }
};

int main(){

rectangle r;

//r.lengh=10;     this will not work, as datatypes in class are hidden.
//r.width=5;

cout<<r.area()<<endl;
return 0;
}

//Ouputs 0; hence Compiler's inbuilt or default constuctor giving out value 0.



// Let's use User-define constuctor,


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

cout<<r.area()<<endl;
cout<<r.area(10,5)<<endl;
return 0;
}

// output =1; as now our constuctor will be called as we have defined it with l=w=1;
//(when their is no constuctor defined by user; default one will be used.)
