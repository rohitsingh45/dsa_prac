#include<bits/stdc++.h>
using namespace std;

void prepareAdjList(unordered_map <int, set<int> > &adjList, int u, int v){
    adjList[u].insert(v);
    adjList[v].insert(u);
}

void printGraph(unordered_map <int, set<int> > &adjList){
    for(auto i:adjList){
        cout << i.first;
        for(auto it:i.second){
            cout << "->" << it;
        }cout << endl;
    }
}

void bfs(unordered_map <int, set<int> > &adjList, unordered_map <int, bool> &visited, vector<int>&ans, int node){
    // Step 1:- Create a queue and push the node in the queue and marked it visited.
    queue<int>q;
    q.push(node);
    visited[node] = 1;

    // Step 2:- performing above operation for adjacent element of above node.
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for(auto i:adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}


void bfsTraversal(int vertex, unordered_map <int, set<int> > &adjList){
    vector<int>ans;
    unordered_map <int, bool> visited;

    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }
cout << "The bfs traversal of above graph is:- " << endl;
    for(auto i:ans){
        cout << i << " ";
    }
}




int main(){
    cout << "Enter number of vertices:- " << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges:- " << endl;
    int E;
    cin >> E;

    cout << "Enter edges of graphs:- " << endl;

    unordered_map <int, set<int> > adjList;
    for(int i=0; i<E; i++){
        int u,v=0;
        cin >> u >> v;
        prepareAdjList(adjList,u,v);
    }

    printGraph(adjList);

    bfsTraversal(V, adjList);
}