#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, list<int> > adjList;

        void createAdjList(int u, int v){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        void printGraph(){
            for(auto i:adjList){
                cout << i.first << "-> ";
                for(auto j:i.second){
                    cout << j << " ";
                }cout << endl;
            }
        }

        bool isCycleBFSUD(int vertex){
            unordered_map<int, bool> visited;
            unordered_map<int, int> parent;

            for(int i=0; i<vertex; i++){
                if(!visited[i]){
                    queue<int> q1;
                    q1.push(i);
                    parent[i] = -1;
                    visited[i] = true;

                    while(!q1.empty()){
                        int frontNode = q1.front();
                        q1.pop();

                        for(auto j:adjList[frontNode]){
                            if(!visited[j]){
                                q1.push(j);
                                parent[j] = frontNode;
                                visited[j] = true;
                            }
                            else if(visited[j] == true and j != parent[frontNode]){
                                return true;
                            }
                        }
                    }
                }
            }
            return false;
        }
};



int main(){
    cout << "Enter number of vertex" << endl;
    int V; 
    cin >> V;

    cout << "Enter number of edges" << endl;
    int E;
    cin >> E;

    Graph g1;

    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        g1.createAdjList(u,v);
    }
    g1.printGraph();
    
    if(g1.isCycleBFSUD(V)){
        cout << "There is cycle in UD" << endl;
    }
    else{
        cout << "No any cycle in graph...." << endl;
    }


    return 0;
}