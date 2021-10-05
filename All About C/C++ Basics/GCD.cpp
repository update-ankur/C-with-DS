#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int gcd(int a,int b)
{
    if(a==0)
    return b;
    else
    return gcd(b%a,a);
}
 
int32_t main()
{
    
    cout<<gcd(6,7)<<endl;
    return 0;
}

