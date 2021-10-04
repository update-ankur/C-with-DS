#include <vector>
using namespace std;
class PriorityQueues{
    vector<int> pq;
public:
    PriorityQueues(){
        
    }
    
    bool isEmpty(){
        return pq.size()==0;
    }
    
    int getSize(){
        return pq.size();
    }
    
    int getMin(){
        if (isEmpty()) {
            return 0;   //PriorityQueues is empty
        }
        return pq[0];
    }
    
    void insert(int data){
        pq.push_back(data);
        
        int childIndex=pq.size()-1;
        
        while (childIndex>0){
            int parentIndex=(childIndex-1)/2;
            
            if (pq[parentIndex]>pq[childIndex]) {   //min heap-order
                int temp=pq[parentIndex];
                pq[parentIndex]=pq[childIndex];
                pq[childIndex]=temp;
            }else{
                break;
            }
        childIndex=parentIndex;
        }
    }
    
    int removeMin(){
        
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        // down-heapify
        int parentIndex=0;
        int leftchildIndex=2*parentIndex+1;
        int rightchildIndex=2*parentIndex+2;
        
        while (leftchildIndex<pq.size()) {
            int minIndex=parentIndex;
            
            if (pq[minIndex]>pq[leftchildIndex]) {
                minIndex=leftchildIndex;
            }
            
            if (pq[minIndex]>pq[rightchildIndex] && rightchildIndex<pq.size()) {
                minIndex=rightchildIndex;
            }
            if (minIndex==parentIndex) {    // above two cases failed i.e.. we dont have child;
                break;
            }
            
            int temp=pq[parentIndex];
            pq[parentIndex]=pq[minIndex];
            pq[minIndex]=temp;
            
            parentIndex=minIndex;
            rightchildIndex=2*parentIndex+1;
            leftchildIndex=2*parentIndex+2;
            
        }
        return ans;
    }
    
    
};
