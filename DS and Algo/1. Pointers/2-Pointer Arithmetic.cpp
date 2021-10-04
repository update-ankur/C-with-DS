#include <iostream>

using namespace std;

int main()
{
    int i=10;
    int* p=&i;

    cout<<p<<endl;

    p++;

    cout<<p<<endl;  // will shift for 4 memory space(as * is int)
    p++;

    cout<<p<<endl;  // will shift for 4  more memory space(as * is int)

    p-=2;

    cout<<p<<endl;  // will shift for 8 memory space(as i is int) in backward direction


    double d=10.22;
    double* dp=&d;
    cout<<dp<<endl;
    dp++;
    cout<<dp<<endl;// will shift for 8  more memory space(as * is double)


   return 0;
}
