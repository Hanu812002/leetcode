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
    void fun(TreeNode* root,string str,vector<string>&s){
        if(root->left==NULL && root->right==NULL)
            s.push_back(str+to_string(root->val));
        if(root->left!=NULL)
            fun(root->left,str+to_string(root->val)+"->",s);
        if(root->right!=NULL)
            fun(root->right,str+to_string(root->val)+"->",s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        if(root!=NULL)
            fun(root,"",v);
        
        return v;
    }
};