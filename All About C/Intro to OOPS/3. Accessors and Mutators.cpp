//---------------------------Step 1----------------------------//


#include<iostream>
using namespace std;


class rectangle{
private:                                  // as a policy of object orientation the data of a class must be hidden.
  int lengh;
  int width;
public:
  int area(){
    return lengh*width;
  }
  int perimeter(){
    return 2*(lengh+width);
  }
};

int main(){

rectangle r;

r.lengh=10;
r.width=5;

cout<<r.area()<<endl;
cout<<r.perimeter()<<endl;

  return 0;
}


// as the data became private we will not be able to access it. hence to set data in class we need some funtions
//hence thier will be error.




//---------------------------Step 2----------------------------//

#include<iostream>
using namespace std;


class rectangle{
private:                                  // as a policy of object orientation the data of a class must be hidden.
  int lengh;
  int width;
public:
  void setLength(int l){
    lengh=l;
  }
  void setWidth(int w){
    width=w;
  }
  // the setWidth & setLength funcs are known as mutators.
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
r.setLength(10);
r.setWidth(5);

cout<<r.area()<<endl;
cout<<r.perimeter()<<endl;

  return 0;
}


// top display length or width of rectangle;



//---------------------------Step 3----------------------------//


#include<iostream>
using namespace std;


class rectangle{
private:                                  // as a policy of object orientation the data of a class must be hidden.
  int lengh;
  int width;
public:
  void setLength(int l){
    lengh=l;
  }
  void setWidth(int w){
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
r.setLength(10);
r.setWidth(5);

cout<<r.area()<<endl;
cout<<r.getLength()<<" & "<<r.getWidth()<<endl;
  return 0;
}


//---------------------------Step 4----------------------------//



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
r.setLength(10);
r.setWidth(5);

cout<<r.area()<<endl;
cout<<r.getLength()<<" & "<<r.getWidth()<<endl;
  return 0;
}
