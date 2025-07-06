#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<int> inDegree(numCourses, 0);
    vector<vector<int>> adj(numCourses);
    
    for (const auto& pre : prerequisites) {
        int course = pre[0];
        int prerequisite = pre[1];
        adj[prerequisite].push_back(course);
        inDegree[course]++;
    }

    queue<int> q;
    for (int i = 0; i < numCourses; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    int count = 0;
    while (!q.empty()) {
        int course = q.front();
        q.pop();
        count++;
        
        for (int neighbor : adj[course]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }
    
    return count == numCourses;
}

int main() {
    int numCourses1 = 2;
    vector<vector<int>> prerequisites1 = {{1, 0}};
    
    cout << "Example 1 Output: " << (canFinish(numCourses1, prerequisites1) ? "true" : "false") << endl;

    int numCourses2 = 2;
    vector<vector<int>> prerequisites2 = {{1, 0}, {0, 1}};
    
    cout << "Example 2 Output: " << (canFinish(numCourses2, prerequisites2) ? "true" : "false") << endl;

    return 0;
}
