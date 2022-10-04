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
    bool hasPathSum(TreeNode* r, int t) {
          if(r==NULL)
            return 0;
        if(t-r->val==0 && r->left==NULL && r->right==NULL){
            return 1;
        }
        // if(r!=NULL)
        else
            t-=r->val;
        return hasPathSum(r->left,t)|| hasPathSum(r->right,t);
    }
};