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
    int ans=INT_MAX;
    int k=INT_MAX;
    void fun(TreeNode* r){
        if(r==NULL)
            return;
        
        
        fun(r->left);
        
        
//         if(r->left)
//             ans=min(ans,r->val-r->left->val);
        
        ans=min(ans,abs(k-r->val));
        k=r->val;
        
        fun(r->right);
        
        
        // if(r->right)
        //     ans=min(ans,r->right->val-r->val);
        
    }
    int minDiffInBST(TreeNode* root) {
        fun(root);
        return ans;
    }
};