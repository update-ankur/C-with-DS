#include <iostream>
using namespace std;
#include "PriorityQueues.h"
int main() {
    
    PriorityQueues p;
    p.insert(10);
    p.insert(11);
    p.insert(111);
    p.insert(1);
    p.insert(121);
    
    cout<<p.getSize()<<endl;
    cout<<p.getMin()<<endl;
    cout<<p.isEmpty()<<endl;
    
    while(p.isEmpty()){
        cout<<p.removeMin()<<" ";
    }

    return 0;
}
