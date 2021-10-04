/* First Program

Program 1          */



#include<iostream>
using namespace std;


int main(){

  int a,b,c;
  cout<<"Enter two Number: ";
  cin>>a>>b;
  c=a+b
  cout<<"Their Sum is: "<<c;

return 0;
}

/* Program 2 */

#include<iostream>
using namespace std;

int main(){
    string name;
  cout<<"Enter your name with Mr or Miss: ";
  getline(cin,name);
  /* instead of cin we use getline for more than one word so that it could print out alk of them:: getline(cin,name)  */
  cout<<"Happy to see you here "<<name;

  return 0;
}
