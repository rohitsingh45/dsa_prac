#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        unordered_map<int, vector<int> > adj;

        void createAdjlist(int source, int destination){
            adj[source].push_back(destination);
            adj[destination].push_back(source);
        }

        void printGraph(){
            for(auto i:adj){
                cout << i.first << "->";
                for(auto j:i.second){
                    cout << j << " ";
                }cout << endl;
            }
        }

        vector<int> shortestPath(int vertex, int source, int destination){  // Use the BFS approach.....
            // Take two data structure to keep track of visited and parents of nodes
            vector<bool> visited(vertex,false);
            vector<int> parent(vertex);

            // Take a queue for applying BFS...
            queue<int> helperQueue;

            // Start the process by pushing source node to the queue and setting visited of source node to true 
            // also set the parent of source node to -1.
            visited[source] = true;
            parent[source] = -1;
            helperQueue.push(source);
            
            while(!helperQueue.empty()){
                int front = helperQueue.front();
                helperQueue.pop();

                for(auto j:adj[front]){
                    if(!visited[j]){
                        helperQueue.push(j);
                        visited[j] = true;
                        parent[j] = front;
                    }
                }
            }
            // Creating a vector to store the answer....
            vector<int> answer;

            // Main algorithm.....
            // setting a pointer node to the last node i.e destination node and push into vector.
            int pointerNode = destination;
            answer.push_back(pointerNode);
            // Traversing the pointer node's parents in reverse direction till it start to pointing source node.
            while(pointerNode != source){
                pointerNode = parent[pointerNode];
                // pushing the all intermediate nodes into the answer vector.
                answer.push_back(pointerNode);
            }
            // Since we have stored the values from the destination to source so we will reverse it for converit
            // it in the form of source to destination.
            reverse(answer.begin(), answer.end());
            return answer;
        }

};

int main(){
    cout << "Enter number of node" << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges" << endl;
    int E;
    cin >> E;
    Graph g1;
    for(int i=0; i<E; i++){
        int u,v;
        cin >> u >> v;
        g1.createAdjlist(u,v);
    }
    cout << "Enter the source and destination node" << endl;
    int source, destination;
    cin >> source >> destination;

    vector<int> answer;
    answer = g1.shortestPath(V,source,destination);
    for(int i:answer){
        cout << i << " ";
    }
}