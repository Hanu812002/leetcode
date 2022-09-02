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
    vector<double> averageOfLevels(TreeNode* root) {
         queue<TreeNode*>q;
        
        vector<double>ans;
        if(root==NULL)
            return ans;
        
        q.push(root);
        
        while(!q.empty()){
           long long s=0;
            long long c=q.size();
            for(long long i=0;i<c;i++){
                TreeNode* t=q.front();
                q.pop();
                s+=t->val;
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
                    
            }
            double d=s/(double)c;
            ans.push_back(d);
            
        }
        return ans;
    }
};