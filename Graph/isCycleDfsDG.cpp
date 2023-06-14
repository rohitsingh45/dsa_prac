// We have used DFS approach for solve check the cycle in graph..... 

#include<bits/stdc++.h>
using namespace std;

void createAdjList(int source, int destination, unordered_map<int,vector<int>> &adjList){
    adjList[source].push_back(destination);
}

bool helper(int node, unordered_map<int,vector<int>>&adjList, vector<bool>&visited, vector<bool>&visitedDfs){
    visited[node] = true;
    visitedDfs[node] = true;

    for(auto j:adjList[node]){
        if(!visited[j]){
            bool temp = helper(j,adjList,visited,visitedDfs);
            if(temp)return true;
        }
        else if(visitedDfs[j] == true){
            return true;
        }
    }
    visitedDfs[node] = false;
    return false;
}

bool isCycleDfsDG(unordered_map<int,vector<int>>&adjList){
    int size = adjList.size();

    vector<bool>visited(size,false);
    vector<bool>visitedDfs(size,false);
    for(int i=0; i<size; i++){
        if(!visited[i]){
            bool statu = helper(i,adjList,visited,visitedDfs);
            if(statu)return true;
        }
    }
    return false;
}


int main(){
    cout << "Enter number of vertex" << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges" << endl;
    int E;
    cin >> E;

    unordered_map<int,vector<int>> adjList;
    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        createAdjList(u,v,adjList);
    }

    cout << isCycleDfsDG(adjList) << endl;


    return 0;
}