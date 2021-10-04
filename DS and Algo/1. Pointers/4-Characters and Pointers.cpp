#include <iostream>

using namespace std;

int main()
{

   int a[]={1,2,3};
   char b[]="abc";  // {a,b,c,0(null char)}

   cout<<a<<endl;
   cout<<b<<endl;


   char* c=&b[1];
   cout<<c<<endl;


   char c1='x';
   char* c1p=&c1;

   cout<<c1<<endl;
   cout<<c1p<<endl;
   // pointer will start printing from address &c1 to untill it get to the null char


   return 0;
}
