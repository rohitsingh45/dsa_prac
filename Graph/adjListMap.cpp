#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


class Graph{
    public:
        unordered_map<int, vector<int> > edges;
    
        void addEdges(int u, int v, bool status){
        edges[u].push_back(v);
        if(status == 0)
            edges[v].push_back(u);

        }

        void printGraph(){
            for(auto i = edges.begin(); i != edges.end(); i++){
                cout << i->first;

                for(auto j=i->second.begin(); j != i->second.end(); j++){
                    cout << "->" << *j;
                }cout << endl;
            }
        }

};




int main(){


    cout << "Enter number of verticies:- \n";
    int V;
    cin >> V;

    cout << "Enter number of edges:- \n";
    int E;
    cin >> E;

    Graph g;

    cout << "Enter edges values:- \n";
    for(int i=0; i<E; i++){
        int u, v = 0;
        cin >> u >> v;
        g.addEdges(u,v,0);
    }

    g.printGraph();


    return 0;
}