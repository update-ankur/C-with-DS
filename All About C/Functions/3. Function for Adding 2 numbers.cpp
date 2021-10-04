
//-----------------------------------Program------------------------------------//

#include<iostream>
using namespace std;


float add(float a, float b){

    float z;          //local variable
    z= a+b;
    return z;

}


int main(){

  float c;            //local variable

  c=add(2.5,6.77);

  cout<<c<<endl;

  return 0;
}
