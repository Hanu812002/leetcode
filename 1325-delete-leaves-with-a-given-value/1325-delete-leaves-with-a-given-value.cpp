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
    TreeNode* help(TreeNode* r, int t){
        if(r!=NULL)
        {
            r->left=help(r->left,t);
            r->right=help(r->right,t);
        if(r->left==NULL && r->right==NULL && r->val==t)
            return NULL;
        else
            return r;
        }
        return NULL;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
       return help(root,target);
    }
};