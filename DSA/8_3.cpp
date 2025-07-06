#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool inRange(const vector<int>& bomb1, const vector<int>& bomb2) {
    int dx = bomb1[0] - bomb2[0];
    int dy = bomb1[1] - bomb2[1];
    int distanceSquared = dx * dx + dy * dy;
    int rangeSquared = bomb1[2] * bomb1[2];
    return distanceSquared <= rangeSquared;
}

void dfs(int index, vector<vector<int>>& graph, vector<bool>& visited, int& count) {
    visited[index] = true;
    count++;
    
    for (int neighbor : graph[index]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited, count);
        }
    }
}

int maximumDetonations(vector<vector<int>>& bombs) {
    int n = bombs.size();
    vector<vector<int>> graph(n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && inRange(bombs[i], bombs[j])) {
                graph[i].push_back(j);
            }
        }
    }

    int maxDetonated = 0;
    for (int i = 0; i < n; i++) {
        vector<bool> visited(n, false);
        int count = 0;
        dfs(i, graph, visited, count);
        maxDetonated = max(maxDetonated, count);
    }
    
    return maxDetonated;
}

int main() {
    vector<vector<int>> bombs1 = {{2, 1, 3}, {6, 1, 4}};
    cout << "Example 1 Output: " << maximumDetonations(bombs1) << endl;

    vector<vector<int>> bombs2 = {{1, 1, 5}, {10, 10, 5}};
    cout << "Example 2 Output: " << maximumDetonations(bombs2) << endl;

    vector<vector<int>> bombs3 = {{1, 2, 3}, {2, 3, 1}, {3, 4, 2}, {4, 5, 3}, {5, 6, 4}};
    cout << "Example 3 Output: " << maximumDetonations(bombs3) << endl;

    return 0;
}
