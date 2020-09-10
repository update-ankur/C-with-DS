// 1
#include <iostream>

using namespace std;


int main()
{
    // int x=5;
    const int x=5;              //const makes it read-only.

    //x++;                  //error: increment of read-only variable ‘x’
    cout<<x<<endl;
}

// 2

#include <iostream>

using namespace std;


int main()
{
    // int x=5;
    int const x=5;              //const makes it read-only.

    //x++;                  //error: increment of read-only variable ‘x’
    cout<<x<<endl;
}


// 3
#include <iostream>

using namespace std;


int main()
{
    int x=5;
    int *p=&x;
    ++*p;

    cout<<x<<endl;
    cout<<*p<<endl;

}
//4
#include <iostream>

using namespace std;


int main()
{
    int const x=5;
    // you can try thus also=> const int x=5;
    int *p=&x;
    ++*p;
// error : we can't store constant identifier to pointer
    cout<<x<<endl;
    cout<<*p<<endl;

}
//5
#include <iostream>

using namespace std;


int main()
{
    const int x=5;
    const int *p=&x;                // read from right to left...pointer of type int constant
    ++*p;
// error: increment of read-only location ‘* p’
// you can assign pointer of type int constant to x integer constant but can't modify pointer
    cout<<x<<endl;
    cout<<*p<<endl;

}
//6

#include <iostream>

using namespace std;


int main()
{
    int x=5;
    const int *p=&x;
    //  pointer is of type integer constant so it can't change value by itself.
    ++*p;
    cout<<x<<endl;
    cout<<*p<<endl;
// error: increment of read-only location ‘* p’
}

//7
#include <iostream>

using namespace std;

int main()
{
    int x=5;
    int *const p=&x;
    //  constant pointer of type integer pointer

    //int y=10;
    //p=&y;

    // we can't move constant pointer to new variable

    ++*p;
    // we can can value of variable assigned to bounded constant pointer

    cout<<*p<<" "<<x<<endl;
// error: increment of read-only location ‘* p’
}

//8
#include <iostream>

using namespace std;

int main()
{
    int x=5;
    const int *const p=&x;

    // constant pointer of type integer constant, now we have fixed the value of constant pointer and thats why we can't upgrade its value using increment decrement and as it is constant pointer we can't assign pointer to new variable

    ++*p;


    cout<<*p<<" "<<x<<endl;
// error: increment of read-only location ‘* p’
}

//9
#include <iostream>

using namespace std;

class fun{

  public:
    int x=10;
    int y=20;
    void show(){
        x++;
        cout<<x<<endl;
    }
};
int main()
{

  fun f;
  f.show();

  return 0;
}


//8

#include <iostream>

using namespace std;

class fun{

  public:
    int x=10;
    int y=20;
    void show() const{
        x++;
        cout<<x<<endl;
    //error: increment of member ‘fun::x’ in read-only object

    // in a contant function we can't increment or decrement value of any variable.. i.e void show() is now constant;
    }
};
int main()
{

  fun f;
  f.show();

  return 0;
}


//9
#include <iostream>

using namespace std;

void fie(int &x,int &y){
    //call by reference

    cout<<x<<" "<<y<<endl;
    x++;
}

int main()
{
    int a=5,b=7;

    fie(a,b);       //call by value functions are inline
                    //here it is call by reference

    cout<<a<<" "<<b<<endl;

  return 0;
}

//10

#include <iostream>

using namespace std;

void fie(int &x,int &y){
    //call by reference

    cout<<x<<" "<<y<<endl;
    x++;
}

int main()
{
    int a=5,b=7;

    fie(a,b);       //call by value functions are inline
                    //here it is call by reference

    cout<<a<<" "<<b<<endl;

  return 0;
}

//11

#include <iostream>

using namespace std;

void fie(const int &x,int &y){      // as of now we fixed value of &x by using 'const'

    //error: increment of read-only reference ‘x’

    // by fixing value of parameter x we are converting this to call by value
    // hence we can make this inline using const,

    cout<<x<<" "<<y<<endl;
    //x++;             uncomment to see the error
}

int main()
{
    int a=5,b=7;

    fie(a,b);       //call by value functions are inline

    cout<<a<<" "<<b<<endl;

  return 0;
}
