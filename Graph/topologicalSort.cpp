// Topological sort is applied on Directed Acyclic Graph.
// It gives the list of vertices of graph in such a manner if there is an edge from
// u to v then u must be present before v in the topological sort.
// If a graph contain cycle then their topological sort is not possible.
// Example:- a graph which has direct edges from 0-1, 0-2, 1-2 since here is not any cycle
// so here there will be a topological sort values 0 1 2.

// Here in this file we have used DFS approach to find out the topological sort of a DAG.

#include<bits/stdc++.h>
using namespace std;


void createAdjList(unordered_map<int,vector<int>>&adjList, int source, int destionation){
    adjList[source].push_back(destionation);
}

void helperTopologicalSort(int node, vector<bool>&visited, stack<int>&tempAnswer, unordered_map<int,vector<int>>&adjList){
    visited[node] = true;

    for(auto j:adjList[node]){
        if(!visited[j]){
            helperTopologicalSort(j,visited,tempAnswer,adjList);
        }
    }
    tempAnswer.push(node);
}


vector<int> topologicalSort(unordered_map<int,vector<int>>&adjList){
    int size = adjList.size();
    vector<bool>visited(size,false);
    vector<int>answer;
    stack<int>tempAnswer;
    for(int i=0; i<adjList.size(); i++){
        if(!visited[i]){
            helperTopologicalSort(i,visited,tempAnswer,adjList);
        }
    }

    while(!tempAnswer.empty()){
        int top = tempAnswer.top();
        tempAnswer.pop();
        answer.push_back(top);
    }

    return answer;

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
        createAdjList(adjList,u,v);
    }

    vector<int>topologicalOrder;
    topologicalOrder = topologicalSort(adjList);

    for(int i:topologicalOrder){
        cout << i << " ";
    }


    return 0;
}