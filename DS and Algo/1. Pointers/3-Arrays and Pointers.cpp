#include <iostream>

using namespace std;

int main()
{

   int a[10];
   cout<<a<<endl;
   cout<<&a[0]<<endl;

   a[0]=5;
   cout<<*a<<endl;

   a[1]=10;
   cout<<*(a+1)<<endl;


   int* p=&a[0];


   cout<<a<<endl;
   cout<<p<<endl;

   cout<<&a<<endl;
   cout<<&p<<endl;


   cout<<sizeof(a)<<endl;
   cout<<sizeof(p)<<endl;


   p++;
   p=a+1;
   return 0;
}
