#include<iostream>
using namespace std;

// First
enum branch {CSE, IT, ECE, EEE, MnC};
/* works like datatype but can have values only inclosed in { this }, */

//second
enum expsn {Smile=1, Sad, Happy, Tensed};

enum ffood {Maggie, Burger=7, SandWich};
int main(){
    // First
     branch s;     /* declared like (int variable) */
     s= MnC;
     cout<<s<<endl; /* output will be 4 as counting start from Zero; i.e.. CSE=0; MnC=4; */
                    /* can't use ++ -- operators on them */

    //second
    expsn k;
    k = Sad;
    cout<<k<<endl;

    ffood w;
    w = SandWich;
    cout<<w<<endl;

    ffood m;
    m = Maggie;
    cout<<m<<endl;
}

// we use these as this become more readable.
