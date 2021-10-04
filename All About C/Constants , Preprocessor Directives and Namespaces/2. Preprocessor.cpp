// 1

#include <iostream>

using namespace std;

#define PI 3.14                 //  machine code will replace PI to 3.14 wherever PI is mentioned.

int main()
{

        cout<<PI<<endl;
    return 0;
}

// 2

#include <iostream>

using namespace std;

#define PI 3.14

#define PI 3.0      // we will get an warning as we are redifining it

// warning: "PI" redefined

int main()
{

        cout<<PI<<endl;

        return 0;

}


// 3

#include <iostream>

using namespace std;

#define PI 3.14

#ifndef PI                      // if not defined then define
    #define PI 3.22
#endif


int main()
{

        cout<<PI<<endl;
        return 0;

}

// 4
#include <iostream>

using namespace std;

#define PI 3.14              // comment this to check second one running

#ifndef PI                      // if not defined then define
    #define PI 3.22
#endif

// 5
int main()
{

        cout<<PI<<endl;

}

#include <iostream>

using namespace std;

#define max(a,b) (a>b?a:b)


int main()
{

        cout<<max(2,3)<<endl;
    return 0;
}

// 6

#include <iostream>

using namespace std;

#define msg(x)  #x          // printing out message


int main()
{

        cout<<msg(Hello)<<endl;
    return 0;
}
