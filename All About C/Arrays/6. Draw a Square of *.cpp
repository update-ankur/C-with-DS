#include<iostream>
using namespace std;


int main(){

    // square shape., (i,j)==(5,5)
    // you can take input from user
    int n;
    cout<<"Square Side Size: ";
    cin>>n;

    for(int i=0; i<n; i++){

      for(int j=0; j<n; j++){
        cout<<" * ";
      }
      cout<<endl;
    }





  return 0;
}
