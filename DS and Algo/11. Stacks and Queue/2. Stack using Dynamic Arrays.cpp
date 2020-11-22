#include <iostream>
using namespace std;

//so you will not need size while creating stack.,

class StackUsingArray{
private:
    int nextIndex;
    int *Data;
    int storagesize;
public:
    StackUsingArray(){
        storagesize=5;  //helps in creating dynamic array
        Data=new int[5];
        nextIndex=0;
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
    
    void push(int x){
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
            int *newData= new int[2*storagesize];
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
    
    int pop(){
        if (nextIndex<=0) {
            return INT_MIN;
        }
        int x=Data[nextIndex-1];
        nextIndex--;
        return x;
    }
    int top(){
        if(nextIndex<0){
            return INT_MIN;
        }
        return Data[nextIndex-1];
    }
};

int main(){

    StackUsingArray s;
    s.push(1);
    s.push(3);
    s.push(5);
    cout<<"1. "<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.push(7);
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
