// You can take input from user. Also can solve directly if you are sure.


#include<iostream>
using namespace std;


int main(){

      int pstcount=0, ngtcount=0;
      int a[5]={5,-1,-2,-3,2};
         for(auto x:a){
             if(x>0)
                 pstcount+=1;
             else if(x<0)
                 ngtcount+=1;

      }
      cout<<"Num of Negative Counts: "<<ngtcount<<endl;
      cout<<"Num of Positive Counts: "<<pstcount<<endl;
  return 0;
}
