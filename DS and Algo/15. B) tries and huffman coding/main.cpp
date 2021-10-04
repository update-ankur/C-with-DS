#include <iostream>
#include "trie.h"
using namespace std;
int main(int argc, const char * argv[]) {
    Trie t;
    t.insertWord("and");
    t.insertWord("are");
    t.insertWord("dot");
    
    cout<<t.Search("and")<<endl;
    
    t.removeWord("and");
    
    cout<<t.Search("and")<<endl;

    
    
    
    
    return 0;
}
