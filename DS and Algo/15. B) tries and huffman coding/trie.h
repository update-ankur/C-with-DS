#include <string>
using namespace std;
class TrieNode{
public:
    char data;
    TrieNode* *children;
    bool isTerminal;
    
    TrieNode(char data){
        this->data=data;
        children=new TrieNode*[26];
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{
private:
    TrieNode* root;
public:
    Trie(){
        root=new TrieNode('\0');
    }
private:
    void insertWord(TrieNode *root,string word){
        // base
        if (word.size()==0) {
            root->isTerminal=true;
            return;
        }
        
        // small calculation
        int index= word[0] -'a';
        TrieNode* child;
        
        if (root->children[index]!=NULL) {
            child= root->children[index];
        }else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        // recursive call
        insertWord(child,word.substr(1));
        
    }
public:
    void insertWord(string word){
        insertWord(root,word);
    }
private:
    bool Search(TrieNode *root,string word){
        
        if (word.size()==0) {
            bool ans=root->isTerminal;
            return ans;
        }
        
        int index= word[0] -'a';
        TrieNode* child;
        if (root->children[index]!=NULL) {
            child= root->children[index];
        }else{
            return false;
        }
        bool result=Search(child,word.substr(1));
        return result;
    }
    
public:
    bool Search(string word){
        bool ans=Search(root,word);
        return ans;
        
    }
    
private:
    void removeWord(TrieNode *root,string word){
        // base case
        if (word.size()==0) {
            root->isTerminal=false;
            return;
        }
        // small calculation
        int index= word[0] -'a';
        TrieNode* child;
        if (root->children[index]!=NULL) {
            child= root->children[index];
        }else{
            return;
        }
        // recursive call
        removeWord(child,word.substr(1));

        // removing childnode if it is useless
        
        if (child->isTerminal==true) {
            for(int i=0;i<26;i++){
                if (child->children[i]!=NULL) {
                    return;
                }
            }
            delete child;
            root->children[index]=NULL;
            
        }
        
        
    }
public:
    void removeWord(string child){
        removeWord(root,child);
    }
    
};
