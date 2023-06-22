#include <bits/stdc++.h>
using namespace std;

void createAdjList(int source, int destination, unordered_map<int,vector<int> > &adjList){
    adjList[source].push_back(destination);
}

bool isCycleDfsDG(unordered_map<int,vector<int> > &adjList, int vertex){
    vector<int> indegree(vertex,0);

    for(auto i:adjList){
        for(auto j:i.second){
            indegree[j]++;
        }
    }

    queue<int>q;
    for(int i=0; i<vertex; i++){
        if(indegree[i]==0)q.push(i);
    }

    int count = 0;
    while(!q.empty()){
        int front = q.front();
        q.pop();

        count++;

        for(auto j:adjList[front]){
            indegree[j]--;
            if(indegree[j] == 0)q.push(j);
        }

    }
    // If number of vertex/elements in topological sort is equal to number of 
    // vetex present in the graph then there is a valid topological sort and if there is any topological sort
    // There will not any cycle because a valid topological sort is possible for only Directed Acyclic Graphs.
    if(count == vertex) return false;
    else return true;
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

    cout << isCycleDfsDG(adjList,V) << endl;


    return 0;
}