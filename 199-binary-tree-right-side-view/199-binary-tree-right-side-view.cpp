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
    int m=0;
    void fun(TreeNode* r,vector<int>&v,int l){
        if(r==NULL)
            return;
        if(m<l){
            v.push_back(r->val);
            m=l;
        }
        fun(r->right,v,l+1);
         fun(r->left,v,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
       vector<int>v;
        fun(root,v,1);
        return v;
    }
};