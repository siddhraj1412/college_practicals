#include <iostream>
#include <vector>

using namespace std;

void dfs(int vertex, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[vertex] = true;
    cout << vertex << " ";
    
    for (int neighbor : adj[vertex]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

void dfsTraversal(int V, vector<vector<int>>& adj) {
    vector<bool> visited(V, false);
    dfs(0, adj, visited);
}

int main() {
    int V = 5;
    vector<vector<int>> adj = {
        {2, 3, 1},
        {0},
        {0, 4},
        {0},
        {2}
    };

    cout << "DFS Traversal: ";
    dfsTraversal(V, adj);
    cout << endl;

    return 0;
}
