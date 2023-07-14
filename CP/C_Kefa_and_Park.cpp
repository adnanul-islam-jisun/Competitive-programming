#include <iostream>
#include <vector>

using namespace std;

bool bfs(vector<vector<int>>& graph, int p, int q)
{
    queue<int> q_nodes;
    vector<bool> visited(graph.size(), false);

    visited[p] = true;
    q_nodes.push(p);

    while (!q_nodes.empty())
    {
        int node = q_nodes.front();
        q_nodes.pop();

        if (node == q)
        {
            return true;
        }

        for (int neighbor : graph[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q_nodes.push(neighbor);
            }
        }
    }

    return false;
}
