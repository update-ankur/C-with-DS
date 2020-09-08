#include <iostream>

using namespace std;

class student{

public:
    string name;
    int roll;
    static int adm_No;
    student(string n){
        name=n;
        adm_No++;
        roll=adm_No;
    }
    void display(){
        cout<<"Name: "<<name<<", Roll: "<<roll<<endl;
    }
};

int student::adm_No=0;

int main()
{

    student s1("Ankur");
    student s2("Sunidhi");

    s1.display();
    s2.display();
    cout<<student::adm_No<<endl;
   return 0;
}
