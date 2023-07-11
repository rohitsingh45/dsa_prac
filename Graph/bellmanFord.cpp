#include <bits/stdc++.h>
using namespace std;


class Graph{
    public:
        int shortestPathBellmanFord(int src, int dest, vector< vector<int> > &edges,int vertex){
            vector<int> dist (vertex+1,INT_MAX);
            dist[src] = 0;
            
            for(int i=0; i<vertex; i++){
                for(int j=0; j<edges.size(); j++){
                    int u = edges[j][0];
                    int v = edges[j][1];
                    int w = edges[j][2];
                    // if(u==v)continue;
                    // cout << u << j << w << endl;
                    if(dist[u] != INT_MAX and (dist[u]+w < dist[v])){
                        dist[v] = dist[u]+w;
                    }
                }
            }
            // int status = 0;
            // for(int j=0; j<edges.size(); j++){
            //         int u = edges[j][0];
            //         int v = edges[j][1];
            //         int w = edges[j][2];
            //         if(dist[u] != INT_MAX and dist[u]+w < dist[v]){
            //             dist[v] = dist[u]+v;
            //             status = 1;
            //         }
            //     }
            // if(status)return -1;
            // else return dist[dest];

            for(auto i:dist){
                cout << i << " ";
            }cout << endl;

            return dist[dest];
        }
};

int main(){
    cout << "Enter number of vertices" << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges" << endl;
    int E;
    cin >> E;
    Graph g1;

    vector< vector<int> > edges(E,vector<int>(3));
    for(int i=0; i<E; i++){
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }

    // for(int i=0; i<edges.size(); i++){
    //     cout << edges[i][0] << " " << edges[i][1] << " " << edges[i][2] << endl;
    // }
   
    cout << "Enter destination node" << endl;
    int dest;
    cin >> dest;

    cout << "Shortest path is:- " << g1.shortestPathBellmanFord(1,dest,edges,V);

}