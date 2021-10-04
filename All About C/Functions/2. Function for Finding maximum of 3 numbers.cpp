//-----------------------------------Program------------------------------------//

#include<iostream>
using namespace std;


int maximum(int a, int b, int c){

    if(a>b && b>c)
      return a;
    else if(c>a)
      return c;
    else
      return b;

}


int main(){
    int z;
    z=maximum(7,4,9);
    cout<<z;

  return 0;
}
