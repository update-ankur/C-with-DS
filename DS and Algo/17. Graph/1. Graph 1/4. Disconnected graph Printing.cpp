void printDFS(int **edges,int n,int sv,bool *visited){
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
            printDFS(edges, n, i,visited);
        }
    }
}

void printBFS(int* *edges, int n, int sv, bool *visited){
    
    queue<int> pending;
    pending.push(sv);
    visited[sv]=true;
    while (!pending.empty()) {
        int CurrentVertex=pending.front();
        cout<<CurrentVertex<<endl;
        pending.pop();
        for (int i=0; i<n; i++) {
            if (i==CurrentVertex) {
                continue;
            }
            if (edges[CurrentVertex][i]==1 && !visited[i]) {
                pending.push(i);
                visited[i]=true;
            }
        }
    }
}


void DFS(int* *edges,int n){
    bool *visited= new bool[n];
    for (int i=0; i<n; i++) {
        visited[i]=false;
    }
    for (int i=0; i<n; i++) {
        if (!visited[i]) {
            printDFS(edges, n, i, visited);
        }
    }
    delete [] visited;
}


void BFS(int* *edges,int n){
    bool *visited= new bool[n];
    for (int i=0; i<n; i++) {
        visited[i]=false;
    }
    for (int i=0; i<n; i++) {
        if (!visited[i]) {
            printBFS(edges, n, i, visited);
        }
    }
    delete [] visited;
}
