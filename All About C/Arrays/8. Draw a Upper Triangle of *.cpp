#include<iostream>
using namespace std;


int main(){

    // square shape., (i,j)==(5,5)
    // you can take input from user
    int n;
    cout<<"Square Side Size: ";
    cin>>n;

    for(int i=i; i<=n; i++){

      for(int j=1; j<=n; j++){

          if(j!=n-i)
            cout<<"   ";
          else
            cout<<" * ";


      }

      cout<<endl;

    }





  return 0;
}
