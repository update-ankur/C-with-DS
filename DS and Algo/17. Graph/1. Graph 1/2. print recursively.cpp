void print(int **edges,int n,int sv,bool *visited){
    cout<<sv<<endl;
    visited[sv]=true;
    
    for (int i=1; i<n; i++) {
        if (i==sv) {
            continue;
        }
        if (edges[sv][i]==1) {
            if (visited[i]==1) {
                continue;
            }
            print(edges, n, i,visited);
        }
    }
}
