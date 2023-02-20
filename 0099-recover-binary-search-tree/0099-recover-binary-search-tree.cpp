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
        void solve(TreeNode*root,vector<int>&v){
      
      if(!root) return;
      
      solve(root->left,v);
      v.push_back(root->val);
      solve(root->right,v);
  }
  void get(TreeNode*root,vector<int>&v,int &i){
      
      if(!root)return;
      get(root->left,v,i);
      root->val = v[i];
      i++;
      get(root->right,v,i);
      
  }

    void recoverTree(TreeNode* root) {
         vector<int>v;
        solve(root,v);
        int i = 0;
        sort(v.begin(),v.end());
        get(root,v,i);
    }
};