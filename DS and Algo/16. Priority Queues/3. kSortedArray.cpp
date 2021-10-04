#include <iostream>
using namespace std;
#include <queue>

void kSortedArray(int input[],int n, int k){
    priority_queue<int>p;
     
    for (int i=0; i<k; i++) {
        p.push(input[i]);
    }
    
    int j=0;
    for(int i=k;i<n;i++){
        input[j]=p.top();
        p.pop();
        p.push(input[k]);
        j++;
    }
    
    // for last k element
    while (p.empty()!=1) {
        input[j]=p.top();
        p.pop();
        j++;
    }
    
}

int main(){
    int a[]={1,2,21,3,14,6,34,5,6646,7};
    kSortedArray(a,10,3);
    
    for (int i=0;i<10;i++) {
        cout<<a[i]<<" ";
    }
    
    return 0;
}


