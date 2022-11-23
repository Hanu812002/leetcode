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
    int s=0;
    int c=0;
    int f=0;
    void sum(TreeNode* r){
        if(r==NULL)
            return;
        s+=r->val;
        c++;
        sum(r->left);
        sum(r->right);
    
    }
    int averageOfSubtree(TreeNode* root) {
        
        s=0;
        c=0;
        if(root==NULL)
            return c;
        sum(root);
        if(s/c==root->val)
            f++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        
        return f;
        
    }
};