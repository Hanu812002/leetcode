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
       unordered_map<TreeNode*, vector<int>> dp;
    int rob(TreeNode* root, bool canRob = true) {
        if(!root) return 0;
        if(dp.count(root) && dp[root][canRob] != -1) return dp[root][canRob];
        dp[root] = {-1,-1};
        int dontRob = rob(root -> left, true) + rob(root -> right, true);
        int robRoot = canRob ? root -> val + rob(root -> left, false) + rob(root -> right, false) : -1;
        return dp[root][canRob] = max(dontRob, robRoot);
    

        
//         queue<TreeNode*>q;
        
//         if(root==NULL)
//             return 0;
        
//         q.push(root);
//         int k=1;
//         int ans1=0;
//         int ans2=0;
        
//         while(!q.empty()){
//             int si=q.size();
//             k=abs(k-1);
            
//             for(int i=0;i<si;i++){
//                 TreeNode* t=q.front();
//                 q.pop();
//                 cout<<t->val<<" ";
                
//                 if(t->left)
//                     q.push(t->left);
                
//                 if(t->right)
//                     q.push(t->right);
                
//                 if(k)
//                     ans1+=t->val;
//                 else
//                     ans2+=t->val;
                
//             }
//             cout<<endl;
//         }
//         return max(ans1,ans2);
    }
};