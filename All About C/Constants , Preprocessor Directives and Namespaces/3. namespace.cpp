// part 1

#include <iostream>

using namespace std;

namespace real{

    void fun(){
        cout<<"Cout of real"<<endl;
    }

};

namespace dummy{
    void fun(){
        cout<<"Cout of dummy"<<endl;
    }

};

int main()
{
    real::fun();
    dummy::fun();

    return 0;
}

// part 2

#include <iostream>

using namespace std;

namespace real{

    void fun(){
        cout<<"Cout of real"<<endl;
    }

};

namespace dummy{
    void fun(){
        cout<<"Cout of dummy"<<endl;
    }

};


using namespace real;       // avoid using 'using namespace'
int main()
{
    fun();
    dummy::fun();           // that's why i wrote avoid using namespace

    return 0;
}

// part 3

#include <iostream>

// using namespace std;

int main()
{
    std::cout<<"Without using namespace std"<<std::endl;

    return 0;
}
