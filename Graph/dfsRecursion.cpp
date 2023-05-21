#include <bits/stdc++.h>
using namespace std;

// Creating adjacency list of graph.....
void prepareAdjList(unordered_map<int, set<int> >&adjList, int source, int destination){
    adjList[source].insert(destination);
    adjList[destination].insert(source);
}
// Printing adjacency list of graph......
void printGraph(unordered_map<int, set<int> > &adjList){
    for(auto i:adjList){
        cout << i.first;

        for(auto j:i.second){
            cout << "->" << j;
        }cout << endl;
    }
}

// DFS using recursion of whole graph......
void dfs(int node, unordered_map<int, set<int> > &adjList, unordered_map<int, bool> &visited, vector<int>&answer){
    visited[node] = true;
    answer.push_back(node);

    for(auto it:adjList[node]){
        if(!visited[it]){
            dfs(it,adjList,visited,answer);
        }
    }
}

vector<int> dfsTraversal(int V, unordered_map<int, set<int> > &adjList){
    unordered_map<int, bool> visited;
    vector<int> answer;
    for(int i=0; i<V; i++){
        if(!visited[i]){
            dfs(i,adjList,visited,answer);
        }
    }
    return answer;
}

// DFS using recursion with different components.....
void dfs2(int node, unordered_map<int, set<int> > &adjList, unordered_map<int, bool> &visited, vector<int> &temp){
    visited[node] = true;
    temp.push_back(node);

    for(auto it:adjList[node]){
        if(!visited[it]){
            dfs2(it,adjList,visited,temp);
        }
    }
}

vector< vector<int> > dfsTraversal2(int V, unordered_map<int, set<int> > &adjList){
    unordered_map<int, bool> visited;
    vector< vector<int> > answer;
    for(int i=0; i<V; i++){
        if(!visited[i]){
            vector<int>temp;
            dfs2(i,adjList,visited,temp);
            answer.push_back(temp);
        }
    }
    return answer;
}

int main(){
    cout << "Enter number of vertices:- " << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges:- " << endl;
    int E;
    cin >> E;

    cout << "Enter edges of graphs:- " << endl;

    unordered_map <int, set<int> > adjList;
    for(int i=0; i<E; i++){
        int u,v=0;
        cin >> u >> v;
        prepareAdjList(adjList,u,v);
    }

    printGraph(adjList);

    vector< vector<int> > dfsResult;

    dfsResult = dfsTraversal2(V, adjList);

    for(auto it:dfsResult){
        for(auto i:it){
            cout << i << "*";
        }cout << endl;
    }
}