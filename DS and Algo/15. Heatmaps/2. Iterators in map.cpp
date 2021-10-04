#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    
    unordered_map<string, int> p;
    p["abc1"]=1;
    p["abc2"]=2;
    p["abc3"]=3;
    p["abc4"]=4;
    p["abc5"]=5;
    p["abc6"]=6;
    p["abc7"]=7;
    p["abc8"]=8;
    
    unordered_map<string,int>::iterator i=p.begin();    //iterator holds address of pair
    
    
    while (i!=p.end()) {
        
        cout<<"Key: "<<i->first<<" Value: "<<i->second<<endl;

        i++;
    }
    
    //.find() returns iterator
    
    unordered_map<string,int>::iterator f=p.find("abc3");
    cout<<"Key: "<<f->first<<" "<<" Value: "<<f->second<<endl;
    
    
    //erase
    cout<<"size: "<< p.size()<<endl;
    p.erase(f);
    cout<<"size: "<<p.size()<<endl;;

    // you can also give start and end i.e.. p.erase(start, end).. it will erase all key-value pair from start till end
    /*
    p["abc3"]=3;
    unordered_map<string,int>::iterator f1=p.find("abc1");
    unordered_map<string,int>::iterator f2=f1+4;
    p.erase(f1, f2);
     */
    
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    
    vector<int>::iterator i1=v.begin();
    
    
    return 0;
}
