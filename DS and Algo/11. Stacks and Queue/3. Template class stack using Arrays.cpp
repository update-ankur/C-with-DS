#include <iostream>
using namespace std;

template <typename T>
class StackUsingArray{
private:
    int nextIndex;
    T *Data;
    int storagesize;
public:
    StackUsingArray(){
        storagesize=5;  //helps in creating dynamic array
        Data=new T[5];
        nextIndex=0;
    }
    int size(){
        return nextIndex;
    }
    
    bool isEmpty(){
        /*
        if (nextIndex==0) {
            return true;
        }
        else{
            return false;
        }
        */
        return nextIndex==0;
    }
    
    void push(T x){
        /*
        if (nextIndex==storagesize) {
            cout<<"Stack overflow"<<endl;
        }
        else{
            Data[nextIndex]=x;
            nextIndex+=1;
        }
        */
        if(nextIndex==storagesize){
            T *newData= new T[2*storagesize];
            for(int i=0;i<storagesize;i++){
                newData[i]=Data[i];
            }
            delete [] Data;
            storagesize*=2;
            Data=newData;
        }
        Data[nextIndex]=x;
        nextIndex++;
        
    }
    
    T pop(){
        if (nextIndex<=0) {
            return 0;
        }
        int x=Data[nextIndex-1];
        nextIndex--;
        return x;
    }
    T top(){
        if(nextIndex<0){
            return 0;
        }
        return Data[nextIndex-1];
    }
};

int main(){
    StackUsingArray<char> s;
    s.push(101);
    s.push(103);
    s.push(105);
    cout<<"1. "<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.push(107);
    cout<<"2. "<<s.size()<<endl;
    cout<<"3. "<<s.pop()<<endl;
    cout<<"4. "<<s.pop()<<endl;
    cout<<"5. "<<s.pop()<<endl;
    cout<<"6. "<<s.size()<<endl;
    cout<<"7. "<<s.isEmpty()<<endl;
    s.pop();
    cout<<"8. "<<s.isEmpty()<<endl;


    
    return 0;
}
