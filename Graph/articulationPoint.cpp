#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, vector<int> > adj;

        void createAdjlist(int u, int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        void printGraph(){
            for(int i=0; i<adj.size(); i++){
                cout << i << "->";
                for(auto j:adj[i]){
                    cout << j << " ";
                }cout << endl;
            }
        }

        void dfsHelper(int node, vector<int> &discover, vector<int> &lowest, vector<bool> &visited, int timer, int parent, vector<int> &result){
            visited[node] = true;
            discover[node] = lowest[node] = timer++;
            int child = 0;

            for(auto j:adj[node]){
                if(!visited[j]){
                    dfsHelper(j,discover,lowest,visited,timer,node,result);

                    lowest[node] = min(lowest[node], lowest[j]);

                    if(lowest[j] >= discover[node] and parent != -1){
                        result[node] = 1;
                    }
                    child++;
                }
                else if(parent == j){
                    continue;
                }
                else{
                    // Visited and not equal to parent.....
                    // Back Edge condition....
                    lowest[node] = min(lowest[node],discover[j]);
                }

                if(parent == -1 and child>1){
                    result[node] = 1;
                }
            }
        }

        vector<int> findArticulationPoint(int vertex){ 
            vector<int> dis(vertex,-1);
            vector<int> low(vertex,-1);
            vector<bool> visited(vertex,false);
            int timer = 0;
            int parent = -1;
            vector<int> result(vertex,0);

            for(int i=0; i<vertex; i++){
                
                if(!visited[i]){
                    dfsHelper(i,dis,low,visited,timer,parent,result);
                }
            }

            return result;
        }
};

int main(){

    cout << "Enter number of vertices " << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges " << endl;
    int E;
    cin >> E;

    Graph g1;

    for(int i=0; i<E; i++){
        int source,destination;
        cin >> source >> destination;
        g1.createAdjlist(source,destination);
    }

    // g1.printGraph();

    vector<int> ap(V,0);
    ap = g1.findArticulationPoint(V);
    for(int i=0; i<V; i++){
        if(ap[i] != 0){
            cout << i << " ";
        }
    }cout << endl;


    return 0;
}