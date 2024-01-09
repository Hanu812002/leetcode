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
     vector<int> helper(TreeNode* root){
        if(root==NULL) return {};
        if(root->left==NULL && root->right==NULL) return {root->val};
        vector<int> left=helper(root->left);
        vector<int> right=helper(root->right);
        vector<int> ans;
        for(int  i=0;i<left.size();i++) ans.push_back(left[i]);
        for(int  i=0;i<right.size();i++) ans.push_back(right[i]);
        return ans;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1=helper(root1);
        vector<int> ans2=helper(root2);
        if(ans1.size()!=ans2.size()) return false;
        for(int i=0;i<ans1.size();i++) if(ans1[i]!=ans2[i]) return false;
        return true;
    }
};