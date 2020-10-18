// Memoization
#include<iostream>
using namespace std;

int f[10];

int mFab(int n){
    
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-1]==-1){
           f[n-1]=mFab(n-1);
        }
        if(f[n-2]==-1){
           f[n-2]=mFab(n-2);
        }

    }
    return f[n-1]+f[n-2];
}
int main(){
    
    for(int i=0;i<10;i++){
        f[i]=-1;
    }

    cout<<mFab(6);

    return 0;
}
