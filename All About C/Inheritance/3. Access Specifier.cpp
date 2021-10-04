
Part 1

#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main()
{
    Rectangle r1;
    // r1.length=5;   error as it is private member ., we can't direct access this
    //r1.setLength=5;
    r1.setLength(5);
    r1.setBreadth(10);
    cout<<r1.area()<<endl;
    
    
    return 0;
}




Part 2



#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l){
        if (l>0)
            length=l;
        else
            length=0;
    }
    void setBreadth(int b){
        if (b>0)
            breadth=b;
        else
            breadth=0;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main()
{
    Rectangle r1;
    // r1.length=5;   error as it is private member ., we can't direct access this
    //r1.setLength=5;
    r1.setLength(-5);
    r1.setBreadth(10);
    cout<<r1.area()<<endl;
    cout<<r1.getLength()<<endl;
    // you can try with +ve number
    
    
    return 0;
}

