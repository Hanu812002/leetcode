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
int s1=0;
// int s2=0;
 void fun(TreeNode* r, int l, int h){
     if(r==NULL)
     return;
     fun(r->left,l,h);
     if(r->val>=l && r->val<=h){
         s1+=r->val;
     }
    //  else
    //  s2+=r->val;

     fun(r->right,l,h);
 }
    int rangeSumBST(TreeNode* root, int low, int high) {
        fun(root,low,high);
        return s1;
    }
};