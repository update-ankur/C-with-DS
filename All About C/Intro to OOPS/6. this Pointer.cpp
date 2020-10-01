#include<iostream>
//we can also use <bits/stdc++.h> when we are using more header file
using namespace std;


class rectangle{
private:
  int length;
  int width;
public:

rectangle(int length, int width){
//same name so we that it becomes efficiet rather than naming it as l,m.
this-> length=length;      //length=length; this will create ambiguity
this-> width=width;
// we can prununciate 'this->' as (a's length) (a's width)
}

  int area(){
    return length*width;
  }
  int perimeter(){
    return 2*(length+width);
  }
};

int main(){

rectangle a(5,6);// rectangle class is called 
//a object is made out of rectangle class 
  
cout<<a.area()<<endl; //calling class function for object a 

  return 0;
}
