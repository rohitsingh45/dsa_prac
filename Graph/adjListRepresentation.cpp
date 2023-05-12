#include <bits/stdc++.h>
using namespace std;

// Implemented using array of vectors.....

void addEdges(vector<int>arr[], int source, int destination){
    arr[source].push_back(destination);
    arr[destination].push_back(source);
}


void printGraph(vector<int>arr[], int V){
    for(int i=0; i<V; i++){
        cout << i;
        for(int j=0; j<arr[i].size(); j++){
            cout << "->" << arr[i][j];
        }cout << endl;
    }
}

int main(){

    cout << "Enter number of vertex in the graph" << endl;
    int V;
    cin >> V;

    vector<int> graph[V];
    
    cout << "Enter number of edges in the graph" << endl;
    int E;
    cin >> E;

    int sourceNode, destinationNode;
    cout << "Enter source node and vertext node of each edges" << endl;
    for(int i=0; i<E; i++){
        cin >> sourceNode >> destinationNode;
        addEdges(graph,sourceNode,destinationNode);
    }
    
    printGraph(graph,V);

    return 0;
}