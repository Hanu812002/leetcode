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
    void fun(TreeNode* root,int &c,vector<int>v){
        if(root==NULL)
            return;
        
        
        v[root->val]++;
        fun(root->left,c,v);
        if(root->left==NULL && root->right==NULL)
        {
            int oc=0;
            for(auto i:v){
                if(i%2==1)
                    oc++;
            }
            if(oc<=1)
                c++;
                
        }
        fun(root->right,c,v);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
     vector<int>v(10,0);
        int c=0;
        fun(root,c,v);
        return c;
    }
};