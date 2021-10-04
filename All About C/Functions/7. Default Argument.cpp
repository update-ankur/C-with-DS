#include<iostream>
using namespace std;

int sum(int a, int b){

return a+b;

}


int main(){

  z=sum(3,4)
  cout<<z;
  return 0;
}

//-------------------------------- Program ---------------------------------//


#include<iostream>
using namespace std;

int sum(int a, int b, int c){

return a+b;

}


int main(){

  z=sum(3,4)          // error will be output, as fun wants 3 parameter and we are passing only 2
// do this to run: z=sum(3,4,0)
// or change int sum(int a, int b, int c=0); i.e.. setting c be to default argument havig value 0

  cout<<z;
  return 0;
}



//-------------------------------- Program ---------------------------------//


#include<iostream>
using namespace std;

int sum(int a, int b, int c=0){

return a+b;

}


int main(){

  cout<<sum(3,4)<<endl;
  cout<<sum(2,4,5)<<endl;
  return 0;
}
//-------------------------------- Program ---------------------------------//


#include<iostream>
using namespace std;

int sum(int a, int b, int c=0){

return a+b;

}


int main(){

  cout<<sum(3,4)<<endl;
  cout<<sum(2,4,5)<<endl;
  return 0;
}

//-------------------------------- Program ---------------------------------//


#include<iostream>
using namespace std;

int max(int a, int b, int c=0){

return a>b && b>c ? a: c>a?c:b;

}


int main(){

  cout<<max(3,4)<<endl;
  cout<<max(2,4,5)<<endl;
  return 0;
}
//-------------------------------- Program ---------------------------------//


#include<iostream>
using namespace std;

int max(int a, int b=0, int c=0){

return a>b && b>c ? a: c>a?c:b;

}


int main(){

  cout<<max(3)<<endl;
  cout<<max(3,4)<<endl;
  cout<<max(2,4,5)<<endl;
  return 0;
}
//-------------------------------- Program ---------------------------------//


#include<iostream>
using namespace std;

int max(int a=0, int b=0, int c=0){

return a>b && b>c ? a: c>a?c:b;

}


int main(){
  cout<<max(0)<<endl;
  cout<<max(3)<<endl;
  cout<<max(3,4)<<endl;
  cout<<max(2,4,5)<<endl;
  
  return 0;
}
