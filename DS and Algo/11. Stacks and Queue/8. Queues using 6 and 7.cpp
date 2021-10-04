//  7

#include <iostream>
using namespace std;
#include "QueuesusingLL.h"

int main(){
    QueueUsingLL<int> q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    
    cout<<"1. "<<q.front()<<endl;
    cout<<"2. "<<q.getsize()<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    cout<<"3. "<<q.front()<<endl;
    cout<<"4. "<<q.getsize()<<endl;
    
    q.dequeue();
    
    cout<<"5. "<<q.isempty()<<endl;
    
    return 0;
}


 
//  6

#include <iostream>
using namespace std;
#include "QueuesUsingArray.h"

int main(){
    QueuesUsingArrayS<int> q(5);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    
    cout<<"1. "<<q.front()<<endl;
    cout<<"2. "<<q.getsize()<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    cout<<"3. "<<q.front()<<endl;
    cout<<"4. "<<q.getsize()<<endl;
    
    q.dequeue();
    
    cout<<"5. "<<q.isEmpty()<<endl;
            
    return 0;
}



