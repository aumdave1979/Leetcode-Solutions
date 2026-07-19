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
    int maxii(TreeNode* root, int &count){
        if(root == nullptr){
            return INT_MIN;
        }
        int left_max = maxii(root->left,count);
        int right_max = maxii(root->right,count);
        int max_subTree = max(root->val,max(left_max,right_max));
        if(max_subTree == root->val){
            count++;
        }
        return max_subTree;
    }
    
    int countDominantNodes(TreeNode* root) {
        int count = 0;
        maxii(root,count);
        return count;
    }
};