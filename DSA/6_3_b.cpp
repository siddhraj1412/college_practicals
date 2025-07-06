#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isLeaf(TreeNode* node) {
    return !node->left && !node->right;
}

void addLeftBoundary(TreeNode* node, vector<int>& result) {
    TreeNode* current = node->left;
    while (current) {
        if (!isLeaf(current)) result.push_back(current->val);
        current = current->left ? current->left : current->right;
    }
}

void addLeaves(TreeNode* node, vector<int>& result) {
    if (!node) return;
    if (isLeaf(node)) {
        result.push_back(node->val);
    } else {
        addLeaves(node->left, result);
        addLeaves(node->right, result);
    }
}

void addRightBoundary(TreeNode* node, vector<int>& result) {
    TreeNode* current = node->right;
    vector<int> temp;
    
    while (current) {
        if (!isLeaf(current)) temp.push_back(current->val);
        current = current->right ? current->right : current->left;
    }
    
    for (int i = temp.size() - 1; i >= 0; i--) {
        result.push_back(temp[i]);
    }
}

vector<int> boundaryOfBinaryTree(TreeNode* root) {
    vector<int> result;
    if (!root) return result;
    
    if (!isLeaf(root)) result.push_back(root->val);
    
    addLeftBoundary(root, result);
    
    addLeaves(root, result);
    
    addRightBoundary(root, result);
    
    return result;
}


void printBoundary(const vector<int>& boundary) {
    for (int val : boundary) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    TreeNode* root = new TreeNode(20);
    root->left = new TreeNode(8);
    root->right = new TreeNode(22);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(12);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(14);
    root->right->right = new TreeNode(25);

    vector<int> boundary = boundaryOfBinaryTree(root);
    
    cout << "Boundary of the binary tree: ";
    printBoundary(boundary);

    return 0;
}
