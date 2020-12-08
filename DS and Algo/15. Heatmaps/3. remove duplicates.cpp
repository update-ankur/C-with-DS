#include <iostream>
#include <unordered_map>    //created using hashtable
#include <vector>
using namespace std;

vector<int> removeDuplicates(int *a, int size){
    vector<int> output;
    unordered_map<int, bool> map;
    
    for(int i=0;i<size;i++){
        if (map.count(a[i])) {
            continue;
        }/*else{
            map[a[i]]=true;
            output.push_back(a[i]);         //this is also correct
        }*/
        map[a[i]]=true;             // O(1)
        output.push_back(a[i]);
    }
    // whole T.C is O(n); i.e 1*n.

    return output;
}

int main(){
    
    int a[]={1,4,3,2,4,5,6,7,8,5,3,2,4,1};
    
    vector<int> filterd=removeDuplicates(a, 13);
    
    for(int i=0;i<filterd.size();i++){
        cout<<filterd[i]<<" ";
    }
    
    
    return 0;
}
