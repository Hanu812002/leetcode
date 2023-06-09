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
    unordered_map<int,int>mp;
    TreeNode* fun(unordered_map<int,int>&mp,vector<int>&pre,int pres,int pree,int ins,int ine){
        if(pres>pree || ins>ine)
            return NULL;
        
        TreeNode* r=new TreeNode(pre[pres]);
        int innn=mp[r->val];
        int numleft=innn-ins;
        
        r->left=fun(mp,pre,pres+1,pres+numleft,ins,innn-1);
        r->right=fun(mp,pre,pres+numleft+1,pree,innn+1,ine);
        return r;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       for(int i=0;i<inorder.size();i++)
          mp[inorder[i]]=i;
        
     // TreeNode* r;
     
          return fun(mp,preorder,0,preorder.size()-1,0,inorder.size()-1);
        
       // r;
        
    }
};