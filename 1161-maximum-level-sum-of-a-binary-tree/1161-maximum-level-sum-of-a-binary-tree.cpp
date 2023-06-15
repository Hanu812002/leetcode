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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        
        if(root==NULL)
            return 0;
        
        q.push(root);
        int ans=INT_MIN;
        int ans_level=0;
        int l=0;
        
        while(!q.empty()){
           l++;
            int si=q.size();
            int sum=0;
            for(int i=0;i<si;i++){
                  TreeNode* t=q.front();
                   q.pop();
                  sum+=t->val;
                 if(t->left)
                     q.push(t->left);
                 if(t->right)
                     q.push(t->right);
                
            }
             
            if(sum>ans){
                ans=sum;
                ans_level=l;
            }
            
        }
        return ans_level;
    }
};