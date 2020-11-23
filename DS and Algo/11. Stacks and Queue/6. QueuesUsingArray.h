template <typename T>
class QueuesUsingArrayS{
    T *Data;
    int size;
    int nextIndex;
    int frontIndex;
    int Capacity;
public:
    QueuesUsingArrayS(int x){
        Data= new T[x];
        nextIndex=0;
        frontIndex=-1;  //initially null
        Capacity=x;
        size=0;
    }
    
    
    int getsize(){
        return size;
    }
    
    
    bool isEmpty(){
        return size==0;
    }
    
    
    void enqueue(T element){
        if(size==Capacity){
            cout<<"Stack is full"<<endl;
            return;
        }
        if(frontIndex==-1){
            frontIndex++;   //i.e.. frontIndex=0;
        }
        Data[nextIndex]=element;
        nextIndex=(nextIndex+1)%Capacity;   //circular
        size++;
    }
    
    T front(){
        if(size==0){    //we can also use isempty()
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return Data[frontIndex];
    }
    
    T dequeue(){
        if(size==0){    //we can also use isempty()
            cout<<"stack is empty"<<endl;
            return 0;
        }
        T frontValue=Data[frontIndex];
        frontIndex=(frontIndex+1)%Capacity;//circular
        size--;
        
        if(size==0){
            frontIndex=-1;
            nextIndex=0;
            //without this fn also our class will work perfectly fine; this is just to reinitialize front starting
        }
        return frontValue;
    }
};
