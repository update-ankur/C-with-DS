#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define M 1000000007
 
int power(int x,int y)
{
    int res=1;
    
    while(y>0)
    {
       if(y&1)
       res=((res%M)*(x%M))%M;
       
       y=y>>1;
       x=((x%M)*(x%M))%M;
    }
    return res;
} 
 
int32_t main()
{
    
    cout<<power(3ll,4ll)<<endl;
    return 0;
}

