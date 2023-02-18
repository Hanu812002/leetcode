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
//     void fun(TreeNode* l,TreeNode* r){
//         if(l==NULL && r==NULL)
//             return;
//         swap(l->val,r->val);
//             fun(l->left,r->right);
//             fun(l->right,r->left);
            

//     }
    TreeNode* invertTree(TreeNode* root) {
     if(root==NULL)  
         return root;
       
       TreeNode* r=invertTree(root->left);
       TreeNode* l=invertTree(root->right);
        root->right=r;
        root->left=l;
        
        return root;
    }
};