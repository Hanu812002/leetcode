/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>v;
    int i;
    bool dfs(TreeNode* r,vector<int>vo){
        if(r==NULL)
            return true;
        if(r->val!=vo[i++])
            return false;
        if(r->left && r->left->val!=vo[i]){
            if(r->right && r->right->val==vo[i])
            { v.push_back(r->val);
              swap(r->left,r->right);
            }
        }
        return dfs(r->left,vo) && dfs(r->right,vo);
    }
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& vo) {
        i=0;
        return dfs(root,vo)?v:vector<int>{-1};
    }
};