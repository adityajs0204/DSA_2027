#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> rightSideView(TreeNode* root) {
    queue<TreeNode*> q;
    vector<int> v;
    if (!root) return v;  
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        for (int i = 1; i <= n; i++) {
            TreeNode* temp = q.front();
            q.pop();
            if (i == n) {
                v.push_back(temp->val);  
            }
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
    return v;
}

int main() {
    // Example tree:
    //        1
    //       / \
    //      2   3
    //       \   \
    //        5   4
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    vector<int> ans = rightSideView(root);

    cout << "Right Side View: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}