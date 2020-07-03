#include<iostream>
using namespace std;

int main(){

  int Basic;
  float allowance, deduction;
  cout<<"Enter Salary: ";
  cin>>Basic;
  cout<<"Enter % of Allowance: ";
  cin>>allowance;
  cout<<"Enter Deduction: ";
  cin>>deduction;

  cout<<"NetSalary is: "<< Basic + (Basic*(allowance/100)) - (Basic*(deduction/100));

  return 0;
}
