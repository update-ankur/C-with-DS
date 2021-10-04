#include <iostream>
using namespace std;
int main(){
  int i=5,j;
  i++;
  cout<<i<<endl;
  i=5;
  ++i;
  cout<<i<<endl;
    /* pre and post inc alone doesn't have much difference unless another variable is used */
  i=5;
  j=i++;
  cout<<i<<" "<<j<<endl;
  i=5;
  j=++i;
  cout<<i<<" "<<j<<endl;
  i=5;
  j=2* ++i + 2* i++;
  cout<<i<<" "<<j<<endl;
  i=5;
  j=2* i++ + 2* i++;
  cout<<i<<" "<<j<<endl;
return 0;
}
