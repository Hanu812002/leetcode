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
    TreeNode* rightfun(TreeNode* root){
        if(root->right==NULL)
            return root;
        return rightfun(root->right);
    }
    void flatten(TreeNode* root) {
     if(root==NULL)
         return ;
     TreeNode* r;
     TreeNode* rr;
        while(root){
            if(root->left){
              rr=rightfun(root->left);
                r=root->right;
                root->right=root->left;
                root->left=NULL;
                rr->right=r;
            }
            root=root->right;
        }
        
    }
};