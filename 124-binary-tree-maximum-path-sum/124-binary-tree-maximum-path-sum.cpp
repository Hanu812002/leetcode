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
     int cal(TreeNode* root, int &mx){
       
       if(root==NULL)return 0;
       
       int lf=cal(root->left,mx);
       int rf=cal(root->right,mx);
       if(lf <0)lf=0;
       if(rf<0)rf=0;
       mx=max(mx,root->val+lf+rf);
    //   cout<<mx<<endl;
       return root->val + max(lf,rf);
   }
    int maxPathSum(TreeNode* root) {
         int mx=INT_MIN;
       cal(root,mx);
       return mx;
    }
};