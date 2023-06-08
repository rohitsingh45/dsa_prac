#include<bits/stdc++.h>
using namespace std;

void createAdjlist(unordered_map<int,vector<int> >&adjList, int source, int destination){
    adjList[source].push_back(destination);
    adjList[destination].push_back(source);
}

bool helper(int node, int parent, unordered_map<int,bool>&visited, unordered_map<int,vector<int> >&adjList){
    visited[node] = true;

    for(auto neighbour:adjList[node]){
        if(!visited[neighbour]){
            bool status = helper(neighbour,node,visited,adjList);
            if(status)return true;
        }
        else if(neighbour != parent){
            return true;
        }
    }
    return false;
}

bool isCycleDFSUD_recursion(int vertex, unordered_map<int,vector<int> >&adjList){
    unordered_map<int,bool>visited;
    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            bool status = helper(i,-1,visited,adjList);
            if(status)return true;
        }
    }
    return false;
}

int main(){

    cout << "Enter number of vertex" << endl;
    int V;
    cin >> V;

    int E;
    cout << "Enter number of edges" << endl;
    cin >> E;

    unordered_map<int, vector<int> > adjList;

    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        createAdjlist(adjList,u,v);
    }

    cout << isCycleDFSUD_recursion(V,adjList);
    
}