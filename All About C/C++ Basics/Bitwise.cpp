#include<iostream>
using namespace std;

int main(){

      int a=5, b=7, c;
      c = a & b;      /* (&)and */
      cout<<c<<endl;

      c= a | b;       /* | (or) */
      cout<<c<<endl;

      c= a^b;         /* (^)XOR */
      cout<<c<<endl;

      char d=5, e;    /* Bitwise left */
      e = d<<1;
      cout<<(int)e<<endl;

      char f=5, g;    /* Bitwise Right */
      g = f>>1;
      cout<<(int)g<<endl;

      char h=5, i;    /* Not */
      i= ~h;
      cout<<(int)i<<endl;

  return 0;
}
