#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
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

    void helper(TreeNode* left, TreeNode* right, int count) {
        if(left == nullptr || right == nullptr)
            return;
        if(count%2 == 1) {
            swap(left->val, right->val);
        }
        helper(left->left, right->right, count + 1);
        helper(left->right, right->left, count + 1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root == nullptr){
            return root;
        }
        helper(root->left, root->right, 1);
        return root;
    }
};