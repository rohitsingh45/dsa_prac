#include <bits/stdc++.h>
using namespace std;

// Kanh's algorithm used in this approach.....

void createAdjList(unordered_map<int, vector<int>> &adjList, int source, int destionation)
{
    adjList[source].push_back(destionation);
}

vector<int> topologicalSort(unordered_map<int, vector<int>> &adjList, int vertex)
{
    int size = vertex;
    vector<int> indegree(size, 0);

    for (auto i : adjList)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < indegree.size(); i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }
    vector<int> answer;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        answer.push_back(front);

        for (auto i : adjList[front])
        {
            indegree[i]--;
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
    }

    return answer;
}

int main()
{
    cout << "Enter number of vertex" << endl;
    int V;
    cin >> V;

    cout << "Enter number of edges" << endl;
    int E;
    cin >> E;

    unordered_map<int, vector<int>> adjList;

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        createAdjList(adjList, u, v);
    }

    vector<int> topologicalOrder;
    topologicalOrder = topologicalSort(adjList, V);
    if (topologicalOrder.size() == V)
    {
        for (int i : topologicalOrder)
        {
            cout << i << " ";
        }
    }
    else{
        cout << "There is cycle in graph" << endl;
    }

    return 0;
}