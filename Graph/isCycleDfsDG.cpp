#include<bits/stdc++.h>
using namespace std;

void createAdjList(int source, int destination, unordered_map<int,vector<int>> &adjList){
    adjList[source].push_back(destination);
}

bool isCycleDfsDG(unordered_map<int,vector<int>>&adjList){
    int size = adjList.size();

    vector<bool>visited(size,false);
    vector<bool>visitedDfs(size,false);
    for(int i=0; i<size; i++){
        if(!visited[i]){
            bool statu = helper(i,adjList,visited,visitedDfs);
        }
    }
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




    return 0;
}