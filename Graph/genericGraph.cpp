#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Graph{
    public:
    unordered_map<T, vector<T>> graph;

    void addEdges(T source, T destination, int ud){
        graph[source].push_back(destination);

        if(ud == 1) graph[destination].push_back(source);
    }

    void printGraph(){
        for(auto i:graph){
            cout << i.first;
            for(auto j:i.second){
                cout <<"->" << j;
            }cout << endl;
        }
    }
};


int main(){

    cout << "Enter number of vertices:- " << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges:- " << endl;
    int E;
    cin >> E;

    Graph<string> g1;

    cout << "Enter edges of graphs:- " << endl;
    for(int i=0; i<E; i++){
        string source, destination;
        cin >> source >> destination;
        g1.addEdges(source,destination,1);
    }

    g1.printGraph();

    return 0;
}