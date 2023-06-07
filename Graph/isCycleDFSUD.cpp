#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, set<int> > adjList;

        void createAdjList(int source, int destionation){
            adjList[source].insert(destionation);
            adjList[destionation].insert(source);
        }

         void printGraph(){
            for(auto i:adjList){
                cout << i.first << "-> ";
                for(auto j:i.second){
                    cout << j << " ";
                }cout << endl;
            }
        }

        bool isCycleDFSUD(int vertex){
            unordered_map<int, bool> visited;
            unordered_map<int, int> parent;
            for(int i=0; i<vertex; i++){
                if(!visited[i]){
                    stack<int>st;
                    st.push(i);
                    visited[i] = true;
                    parent[i] = -1;

                    while(!st.empty()){
                        int top = st.top();
                        st.pop();

                        for(auto j:adjList[top]){
                            if(!visited[j]){
                                st.push(j);
                                parent[j] = top;
                                visited[j] = true;
                            }
                            else if(visited[j] == true and j != parent[top]){
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
    cout << g1.isCycleDFSUD(V) << endl;
    return 0;
}