#include<iostream>
using namespace std;

int main(){

  int size;
  cout<<"Enter the size of an array: ";
  cin>>size;
  int *p =new int[size];              // dyanamically allocation in Heap Memory




// TO CHANGE THE SIZE ACCORDING TO USER

// DON'T DO LIKE THIS AS THIS WILL CAUSE MEMORY LEAK PROBLEM.

  cout<<"Enter the size of an array: ";
  cin>>size;
  p=new int[size];

  return 0;
}

//----------------------------DO THIS INSTEAD---------------------------------//

#include<iostream>
using namespace std;

int main(){

  int size;
  cout<<"Enter the size of an array: ";
  cin>>size;
  int *p =new int[size];

  cout<<sizeof p<<endl;



  delete []p;
  cout<<"Enter the size of an array: ";
  cin>>size;
  p=new int[size];
  cout<<sizeof p<<endl;


  return 0;
}
