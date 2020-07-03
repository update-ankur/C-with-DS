/* overflow is cyclic; min-> max; max--> min; like clock; */


#include<iostream>
using namespace std;
int main(){

char a=127;
cout<<(int)a<<endl;

char b=127;
b++;
cout<<(int)b<<endl;

char c=130;
c++;
cout<<(int)c<<endl;

char d=-128;
d--;
cout<<(int)d<<endl;

int e= 2147483747;
cout<<(int)e<<endl;

int f= 2147483747;
a++;
cout<<f<<endl;

return 0;
}
