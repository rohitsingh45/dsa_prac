#include <bits/stdc++.h>
using namespace std;


int main(){
    cout << "Enter number of vertices" << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges" << endl;
    int E;
    cin >> E;

    vector< vector<int> > adj(V, vector<int>(V,0));  // created a vector of V X V.

    // Creating adj matrix......
    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
    }

    // Printing adj matrix ......
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            cout << adj[i][j] << " ";
        }cout << endl;
    }

    // BFS traversal....
    vector<bool> visited(V,false);
    queue<int> q;
    vector<int> answer;
    for(int i=0; i<V; i++){
        if(!visited[i]){
            q.push(i);
            visited[i] = true;

            while(!q.empty()){
                int front = q.front();
                q.pop();
                answer.push_back(front);

                for(int i=0; i<V; i++){
                    if(adj[front][i] == 1 and !(visited[i])){
                        q.push(adj[front][i]);
                        visited[i] = true;
                        answer.push_back(adj[front][i]);
                    }
                }

            }
        }
    }

    for(auto i: answer) cout << i << " ";
    cout << endl;

}