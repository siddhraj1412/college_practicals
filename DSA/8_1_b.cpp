#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfsTraversal(int V, vector<vector<int>>& adj) {
    vector<bool> visited(V, false);
    queue<int> q;
    
    visited[0] = true;
    q.push(0);
    
    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        cout << vertex << " ";
        
        for (int neighbor : adj[vertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int V = 5;
    vector<vector<int>> adj = {
        {1, 2, 3},
        {4},
        {},
        {},
        {}
    };

    cout << "BFS Traversal: ";
    bfsTraversal(V, adj);
    cout << endl;

    return 0;
}
