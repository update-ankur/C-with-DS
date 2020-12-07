#include <iostream>
#include <unordered_map>    //created using hashtable  // O(1)
//ordered map aka map are built using BST // O(log(n))
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
 
    unordered_map<string, int> ourmap;
    
//------------------->insert<-----------------------//
    
    //for insert map will take pair, so we need to create pair first
    pair<string, int> p("abc",1);
    
    ourmap.insert(p);
    
    // we can also use map["def"]=2
    ourmap["def"]=2;
    
    
//------------------->find or access<-----------------------//
    // pass key., return value
    cout<< ourmap["abc"]<<endl;
    
    //we can also use .at("key")
    cout<< ourmap.at("abc")<<endl;
   // cout<< map.at("xyz")<<endl;     // error:: key not found

    //using map[key] will return value and incase key is not there it will insert that and assign value 0 .,
    cout<< ourmap["xyz"]<<endl;

//------------------->size<-----------------------//
    cout<<ourmap.size()<<endl; //3
    
    cout<<ourmap["xyza"]<<endl;    // this will insert and return., as a result, size will increase
    
    cout<<ourmap.size()<<endl;     //4

    
//------------------->count<-----------------------//
// if element is present then return 1., else 0;
    
    if(ourmap.count("abc")){
        cout<<"element is present"<<endl;
    }else{
        cout<<"element is absent"<<endl;

    }
    
    if(ourmap.count("lmn")){
        cout<<"element is present"<<endl;
    }else{
        cout<<"element is absent"<<endl;

    }
    
//------------------->erase<-----------------------//
    
    cout<<ourmap.size()<<endl;     //4

    ourmap.erase("abc");
    
    if(ourmap.count("abc")){
        cout<<"element is present"<<endl;
    }else{
        cout<<"element is absent"<<endl;

    }
    cout<<ourmap.size()<<endl;     //3.., means abc is removed

//------------------->erase<-----------------------//
    
    
    
    return 0;
}
