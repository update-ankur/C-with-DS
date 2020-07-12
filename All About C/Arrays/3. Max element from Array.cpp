// You can take input from user. Also can solve directly if you are sure.


#include<iostream>
using namespace std;


int main(){

      int max=0;
      int a[5]={5, 6, 7, 4, 3};
      for(int i=0; i<5; i++){
           if(a[i]>max)
                max=a[i];
      }
      cout<<max<<" is the maximum number in this arrry.";
  return 0;
}
