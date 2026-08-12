#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* dummy;

    void traversal(TreeNode* root) {
        if(root == nullptr) return;

        traversal(root->left);
        dummy->right = new TreeNode(root->val);
        dummy = dummy->right;
        traversal(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        if(root == nullptr) return nullptr;

        TreeNode* node = new TreeNode(0);
        dummy = node;

        traversal(root);

        return node->right;
    }
};