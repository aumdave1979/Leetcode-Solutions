#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.4

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
right(right) {}
};

class Solution {
public:
    TreeNode* helper(vector<int>& postorder, int postStart, int postEnd,
                     vector<int>& inorder, int inStart, int inEnd,
                     map<int, int>& mpp) {
        if (postStart > postEnd || inStart > inEnd)
            return nullptr;

        TreeNode* root = new TreeNode(postorder[postEnd]);
        int inorder_location = mpp[root->val];
        int numbers_left = inorder_location - inStart;

        root->left = helper(postorder,postStart,postStart+numbers_left-1,inorder,inStart,   inorder_location-1,mpp);

        root->right = helper(postorder, postStart+ numbers_left, postEnd-1,
                             inorder, inorder_location + 1, inEnd, mpp);
                             
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> mpp;

        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]] = i;
        }
        TreeNode* root = helper(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mpp);
        return root;
    }
};