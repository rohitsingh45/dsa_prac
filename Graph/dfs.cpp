#include<bits/stdc++.h>
using namespace std;

void prepareAdjList(unordered_map <int, vector<int> > &adjList, int u, int v){
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void printGraph(unordered_map <int, vector<int> > &adjList){
    for(auto i:adjList){
        cout << i.first;
        for(auto it:i.second){
            cout << "->" << it;
        }cout << endl;
    }
}

void dfs(unordered_map <int, vector<int> > &adjList, unordered_map <int, bool> &visited, vector<int>&ans, int node){
    stack<int>st;
    st.push(node);
    visited[node] = 1;

    while(!st.empty()){
        int frontNode = st.top();
        st.pop();
        ans.push_back(frontNode);

        for(auto i:adjList[frontNode]){
            if(!visited[i]){
                st.push(i);
                visited[i] = 1;
            }
        }
    }
}


void dfsTraversal(int vertex, unordered_map <int, vector<int> > &adjList){
    vector<int>ans;
    unordered_map <int, bool> visited;

    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            dfs(adjList, visited, ans, i);
        }
    }
cout << "The dfs traversal of above graph is:- " << endl;
    for(auto i:ans){
        cout << i << " ";
    }
}




int main(){
    cout << "Enter number of vertices:- " << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges:- " << endl;
    int E;
    cin >> E;

    cout << "Enter edges of graphs:- " << endl;

    unordered_map <int, vector<int> > adjList;
    for(int i=0; i<E; i++){
        int u,v=0;
        cin >> u >> v;
        prepareAdjList(adjList,u,v);
    }

    printGraph(adjList);

    dfsTraversal(V, adjList);
}