#include <bits/stdc++.h>
using namespace std;



int main(){

    cout << "Enter number of vertex in the graph" << endl;
    int V;
    cin >> V;

    vector<int>row(V,0);
    vector< vector<int> > edges(V,row);   
    
    cout << "Enter number of edges in the graph" << endl;
    int E;
    cin >> E;

    int sourceNode, destinationNode;
    cout << "Enter source node and vertext node of each edges" << endl;
    for(int i=0; i<E; i++){
        cin >> sourceNode >> destinationNode;
        edges[sourceNode][destinationNode] = 1;
        edges[destinationNode][sourceNode] = 1;
    }
    
    for(int i=0; i<edges.size(); i++){
        for(int j=0; j<edges[i].size(); j++){
            cout << edges[i][j] << " ";
        }cout << endl;
    }

    return 0;
}