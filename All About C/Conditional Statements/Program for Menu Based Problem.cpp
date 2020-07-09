#include<iostream>
using namespace std;

int main(){

      cout<<"Menu"<<endl;
      cout<<"1. Add\n"<<"2. Substract\n"<<"3. Multiplication\n"<<"4. Division\n";
      int n;
      cout<<"ENTER YOUR CHOICE: ";
      cin>>n;
      int a,b;
      cout<<"ENTER TWO NUMBER: ";
      cin>>a>>b;
      switch (n) {
        case 1: cout<<(a+b);          // we can use third variable; and can print that out at bottom
        break;
        case 2: cout<<(a-b);
        break;
        case 3: cout<<(a*b);
        break;
        case 4: cout<<(a/b);
        break;
        default: cout<<" Invalid Option.";
      }

                                      //here

  return 0;
}
