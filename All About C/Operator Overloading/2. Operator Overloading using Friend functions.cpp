#include<iostream>
using namespace std;

class Complex{
private:
  int real;
  int img;
public:
  Complex(int a=0, int b=0){
    real=a;
    img=b;
  }
  void display(){
    cout<<real<<"+i"<<img;
  }
  friend Complex operator+(Complex r, Complex i);

};

Complex operator+(Complex r, Complex i){
  Complex temp;
  temp.real=i.real+r.real;
  temp.img=i.img+r.img;
  return temp;
}

int main(){

Complex c1(2,4), c2(4,6), c3;

c3=c1+c2;

c3.display();
  return 0;
}
