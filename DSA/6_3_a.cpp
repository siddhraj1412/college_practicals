#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> rightView(TreeNode* root) {
    vector<int> result; 
    if (!root) return result;
    
    queue<TreeNode*> q;
    
    while (!q.empty()) {
        int size = q.size();
        
        for (int i = 0; i < size; i++) {
            TreeNode* current = q.front();
            q.pop();
            
            if (i == size - 1) {
                result.push_back(current->val);
            }
            
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
    }
    
    return result;
}

void printVector(const vector<int>& vec) {
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->left = new TreeNode(4);
    root1->left->right = new TreeNode(5);

    vector<int> result1 = rightView(root1);
    cout << "Right View of Tree 1: ";
    printVector(result1);

    TreeNode* root2 = new TreeNode(1);
    root2->right = new TreeNode(3);
    
    vector<int> result2 = rightView(root2);
    cout << "Right View of Tree 2: ";
    printVector(result2);
    
    TreeNode* root3 = NULL;
    
    vector<int> result3 = rightView(root3);
    cout << "Right View of Tree 3: ";
    printVector(result3);

    return 0;
}
