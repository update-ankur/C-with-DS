// You can take input from user. Also can solve directly if you are sure.


#include<iostream>
using namespace std;


int main(){

      int min=0;
      int a[5]={5, 6, 7, 4, 3};
      for(int i=0; i<5; i++){
           min=a[0];
           if(a[i]<min)
                min=a[i];
      }
      cout<<min<<" is the minimum number in this arrry.";
  return 0;
}
