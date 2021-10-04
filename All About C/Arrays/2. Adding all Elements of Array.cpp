// You can take input from user. Also can solve directly if you are sure.


#include<iostream>
using namespace std;


int main(){

      int a[5]={5, 6, 7, 4, 3};
      int sum=0;

      for(int i=0; i<5; i++){
        sum+=a[i];
      }

      cout<<"Additon of elements are: "<<sum;

  return 0;
}
