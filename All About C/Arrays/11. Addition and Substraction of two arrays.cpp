#include<iostream>
using namespace std;


int main(){


  // You can take shape from user. This one is just an example.

      int a[2][3], b[2][3], c[2][3];
      cout<<"-------------------------------------------------------------------"<<endl;
      cout<<"Enter Matrix A"<<endl;
      cout<<"-------------------------------------------------------------------"<<endl;

      for(int i=1; i<=2; i++){
        for(int j=1; j<=3; j++){
          cout<<"Enter Element at index "<<i<<" "<<j<<endl;
          cin>>a[i][j];
        }
        cout<<endl;
      }
      cout<<"-------------------------------------------------------------------"<<endl;
      cout<<"Enter Matrix b"<<endl;
      cout<<"-------------------------------------------------------------------"<<endl;

      for(int i=1; i<=2; i++){
        for(int j=1; j<=3; j++){
          cout<<"Enter Element at index "<<i<<" "<<j<<endl;
          cin>>b[i][j];
        }
        cout<<endl;
      }


      for(int i=1; i<=2; i++){
          for(int j=1; j<=3; j++){
            c[i][j]= a[i][j]+b[i][j];               // use - for substraction.
          }
        }
        cout<<"-------------------------------------------------------------------"<<endl;
        cout<<"Matrix c is"<<endl;
        cout<<"-------------------------------------------------------------------"<<endl;
      for(int i=1; i<=2; i++){
          for(int j=1; j<=3; j++){
            cout<<" "<<c[i][j];
          }
          cout<<endl;
        }


  return 0;
}
