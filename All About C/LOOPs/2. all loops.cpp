#include<iostream>
using namespace std;

int main(){

//    while(1){
//      cout<<"It's Infinite Loop as Condition is 1(True)"<<endl;
//    }

    int a;
    while(a<10){
          cout<<a<<endl;
          a++;
      }


    cout<<"------------------"<<endl;


    int d=0;
    do{
        cout<<d<<endl;
        d++;
    }while(d<10);


    cout<<"------------------"<<endl;


    for(int i=0; i<10; i++){
        cout<<i<<endl;
    }



  return 0;
}
