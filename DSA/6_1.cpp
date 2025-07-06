#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void insertLeft(TreeNode* node, int value) {
    if (!node->left) {
        node->left = new TreeNode(value);
    } else {
        cout << "Left child already exists!" << endl;
    }
}

void deleteRight(TreeNode* node) {
    if (node->right) {
        delete node->right;
        node->right = NULL;
    } else {
        cout << "Right child doesn't exist!" << endl;
    }
}

void inorderTraversal(TreeNode* root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(TreeNode* root) {
    if (!root) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
}

void levelOrderTraversal(TreeNode* root) {
    if (!root) return;
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        cout << current->val << " ";
        
        if (current->left) {
            q.push(current->left);
        }
        
        if (current->right) {
            q.push(current->right);
        }
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    
    insertLeft(root, 2);
    root->right = new TreeNode(3);
    
    insertLeft(root->left, 4);   
    root->left->right = new TreeNode(5); 
    
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    deleteRight(root);
    
    cout << "\nAfter deleting right child of root (3):\n";
    
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}
