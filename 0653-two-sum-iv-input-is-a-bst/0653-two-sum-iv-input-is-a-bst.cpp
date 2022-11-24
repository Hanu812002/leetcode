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
    bool twoSum(TreeNode* root, int k,unordered_set<int> &s){
        if(!root) return false;
        if(s.find(k-root->val)!=s.end())return true;
        else s.insert(root->val);
        bool lt = twoSum(root->left,k,s);
        bool rt = twoSum(root->right,k,s);
        return lt||rt;
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> s;
        return twoSum(root,k,s);
    }
};