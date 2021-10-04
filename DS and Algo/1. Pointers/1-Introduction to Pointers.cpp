#include <iostream>
using namespace std;

int main(){

int i;
cout<<&i<<endl;

int *p=&i;
cout<<p<<endl;

float f=2.3;
float *fp=&f;


double d=12.122;
double *dp=&d;


  return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int i=10;
    int* p=&i;


    cout<<sizeof(p)<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;

    i++;

    cout<<i<<endl;
    cout<<*p<<endl;

    int a=*p;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;

    i=12;

    cout<<i<<endl;
    cout<<*p<<endl;

    *p=23;

    cout<<i<<endl;
    cout<<*p<<endl;

    (*p)++;

    cout<<i<<endl;
    cout<<*p<<endl;




    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int i;

    cout<<i<<endl;

    i++;
    cout<<i<<endl;

    //int* p;
    //cout<<p<<endl;
//    cout<<*p<<endl;

//    (*p)++;     // this will update value of int* p; and don't do this as this may change value (rom) for permanent

// so for this "always" initialise with null pointer.
    int* p=0;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}
// segmentation fault:: Meaning u cAN'T ACCESS TO THAT MEMORY LOCATION.
