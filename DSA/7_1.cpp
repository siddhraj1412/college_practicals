#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* insertNode(TreeNode* root, int val) {
    if (!root) {
        return new TreeNode(val);
    }
    
    if (val < root->val) {
        root->left = insertNode(root->left, val);
    } else if (val > root->val) {
        root->right = insertNode(root->right, val);
    }
    
    return root;
}

TreeNode* searchBST(TreeNode* root, int val) {
    if (!root || root->val == val) {
        return root;
    }
    
    if (val < root->val) {
        return searchBST(root->left, val);
    }
    
    return searchBST(root->right, val);
}

void inorderTraversal(TreeNode* root) {
    if (!root) return;
    
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    TreeNode* root = NULL;
    
    root = insertNode(root, 4);
    root = insertNode(root, 2);
    root = insertNode(root, 7);
    root = insertNode(root, 1);
    root = insertNode(root, 3);
    
    cout << "Inorder Traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;
    
    int val = 2;
    TreeNode* searchResult = searchBST(root, val);
    
    if (searchResult) {
        cout << "Subtree rooted at node with value " << val << ": ";
        inorderTraversal(searchResult);
        cout << endl;
    } else {
        cout << "Node with value " << val << " not found in the BST." << endl;
    }
    
    return 0;
}
