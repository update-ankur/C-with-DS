#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> pq;
    pq.push(1);
    pq.push(44);
    pq.push(2);
    pq.push(23);
    pq.push(54);
    pq.push(46);
    pq.push(77);
    
    cout<<pq.size()<<endl;
    pq.pop();

    cout<<pq.empty()<<endl;
    cout<<pq.size()<<endl;

    while (pq.empty()!=1) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    cout<<pq.empty();
    
    return 0;
}
