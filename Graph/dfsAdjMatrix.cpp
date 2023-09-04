#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<bool>&visited, vector< vector<int> > &adj){
    visited[node] = true;
    cout << node << " ";

    for(int j=0; j<visited.size(); j++){
        if(adj[node][j]== 1 and !visited[j]){
            dfs(j,visited,adj);
        }
    }
}


int main(){
    cout << "Enter number of vertices" << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges" << endl;
    int E;
    cin >> E;

    vector< vector<int> > adj(V, vector<int>(V,0));  // created a vector of V X V.

    // Creating adj matrix......
    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
    }

    // Printing adj matrix ......
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            cout << adj[i][j] << " ";
        }cout << endl;
    }

    vector<bool> visited(V,false);
    for(int i=0; i<V; i++){
        if(!visited[i]){
            dfs(i,visited,adj);
        }
    }
}