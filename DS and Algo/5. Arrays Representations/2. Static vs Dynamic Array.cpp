#include <iostream>
using namespace std;

int main(){
    int x=6;
    int A[5]={1,2,3,4,5};
    cout<<"Static Array"<<endl;

    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    cout<<"Dynamic Array"<<endl;

    int *B=new int [5];
    for(int i=0;i<6;i++){
        B[i]=x;
        x++;
    }
    for(int i=0;i<5;i++){
        cout<<B[i]<<endl;
    }


    return 0;
}
