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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root == nullptr){
            return ans;
        }
        vector<vector<int>> list;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != nullptr){
                    q.push(node->left);
                }
                if(node->right != nullptr){
                    q.push(node->right);
                }
                temp.push_back(node->val);
            }
            list.push_back(temp);
        }
        
        for(int i=0;i<list.size();i++){
            double avg = 0;
            for(int j=0;j<list[i].size();j++){
                avg+=list[i][j];
            }
            ans.push_back(avg/list[i].size());
            avg = 0;
        }

    return ans;
    }
};