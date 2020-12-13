#include <iostream>
using namespace std;

void HeapSort(int input[],int n){
    // build heap;
    for(int i=1;i<n;i++){
        int childIndex=i;
        while (childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if (input[parentIndex]>input[childIndex]) {
                int temp=input[parentIndex];
                input[parentIndex]=input[childIndex];
                input[childIndex]=temp;
            }else{
                break;
            }
        childIndex=parentIndex;
        }
    }
    
    // remove
    
    int size=n;
    while (size>1) {
        
        int temp=input[0];
        input[0]=input[size-1];
        input[size-1]=temp;
        size--;
        
        int parentIndex=0;
        int leftchildIndex=2*parentIndex+1;
        int rightchildIndex=2*parentIndex+2;
        while (leftchildIndex<size) {
            int minIndex=parentIndex;
            
            if (input[minIndex]>input[leftchildIndex]) {
                minIndex=leftchildIndex;
            }
            
            if (input[minIndex]>input[rightchildIndex] && rightchildIndex<size) {
                minIndex=rightchildIndex;
            }
            if (minIndex==parentIndex) {    // above two cases failed i.e.. we dont have child;
                break;
            }
                
            int temp=input[parentIndex];
            input[parentIndex]=input[minIndex];
            input[minIndex]=temp;
            
            parentIndex=minIndex;
            rightchildIndex=2*parentIndex+1;
            leftchildIndex=2*parentIndex+2;
        }
    }
}



int main(){
    int x[]={100,23,67,65,53,2};
    
    HeapSort(x,6);
    
    for(int i=0;i<6;i++){
        cout<<x[i]<<" ";
    }
    
    return 0;
}
