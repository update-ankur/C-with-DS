// part 1; int type

#include <iostream>

using namespace std;

class stack{
    private:
        int *stk;
        int size;
        int top;
    public:

        stack(int z){
            size=z;
            top=-1;
            stk=new int[size];
        }
        void push(int x);
        int pop();
};

void stack::push(int x){
    if(top==size-1){
        cout<<"stack is full"<<endl;
    }
    else{
        top++;
        stk[top]=x;
    }
}

int stack::pop(){
    int x=0;
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        x=stk[top];
        top--;
    }
    return x;
}
int main()
{
    cout<<"Hello World";

    return 0;
}

// part 2 for any type

#include <iostream>

using namespace std;

template<class t>
class stack{
    private:
        t *stk;
        int size;
        int top;
    public:
        stack(int z){
            size=z;
            top=-1;
            stk=new t[size];
        }
        void push(t x);
        t pop();
};

template<class t>
void stack<t>::push(t x){          // use stack<t> otherwise you will get an error
    if(top==size-1){
        cout<<"stack is full"<<endl;
    }
    else{
        top++;
        stk[top]=x;
    }
}

template<class t>
t stack<t>::pop(){
    t x=0;
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        x=stk[top];
        top--;
    }
    return x;
}
int main()
{

    stack<int> s(4);
    s.push(23);
    s.push(2);

    return 0;
}
