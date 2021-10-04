#include <iostream>
using namespace std;

int main(){

    int A[5];
    int B[5]={1,2,3,4,5};
    int C[5]={1,2};
    int D[5]={0};
    int E[]={1,2,3,4,5,6,7};

    // to verify if elements are contigious
    for(int i=0;i<6;i++){
        cout<<&A[i]<<endl;
    }

    return 0;
}
