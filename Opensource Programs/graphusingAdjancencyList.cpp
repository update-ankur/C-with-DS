#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
        
    }
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void print(){
        for(int i=0;i<V;i++){
            cout<<"Vertex "<<i<<"->";
            for(int j:l[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        
    }
    
};

int main(){
    Graph G(5);
    G.addEdge(0,4);
    G.addEdge(0,2);
    G.addEdge(2,3);
    G.print();
}
