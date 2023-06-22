#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, vector< pair<int, int> > > adjlist;

        void createAdjlist(int source, int destination, int weight){
            adjlist[source].push_back({destination,weight});
            adjlist[destination].push_back({source,weight});
        }

        void printGraph(){
            for(auto i:adjlist){
                cout << i.first << "->";
                for(auto j:i.second){
                    cout << "(" << j.first << " " << j.second << ")";
                }cout << endl;
            }
        }

        vector<int> disjkastra(int vertex, int source){
            set< pair<int, int> > helperSet;
            vector<int> distance(vertex,INT_MAX);

            distance[source] = 0;
            helperSet.insert(make_pair(distance[source],source));

            while(!helperSet.empty()){
                auto temp = *(helperSet.begin());
                int distanceVal = temp.first;
                int node = temp.second;
                helperSet.erase(helperSet.begin());

                if(distance[node] != INT_MAX){
                    for(auto j:adjlist[node]){
                        if(j.second + distance[node] < distance[j.first]){
                            distance[j.first] = j.second + distance[node];
                            helperSet.insert(make_pair(distance[j.first],j.first));
                        }
                    }
                }
            }

            return distance;
        }
};


int main(){
    cout << "Enter number of vertices" << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges" << endl;
    int E;
    cin >> E;

    Graph g2;

    for(int i=0; i<E; i++){
        int u,v,w;
        cin >> u >> v >> w;
        g2.createAdjlist(u,v,w);
    }

    // g2.printGraph();
    cout << "Enter source node" << endl;
    int source;
    cin >> source;

    vector<int> answer;
    answer = g2.disjkastra(V,source);
    for(int i:answer){
        cout << i << " ";
    }

}