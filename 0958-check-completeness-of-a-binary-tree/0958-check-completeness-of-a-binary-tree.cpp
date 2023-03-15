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
    bool isCompleteTree(TreeNode* root) {
        
        queue<TreeNode*>q;
        
        if(root)
            q.push(root);
        
        vector<int>v;
        int f=0;
        while(!q.empty()){
            
            v.clear();
            int siz=q.size();
            
            for(int i=0;i<siz;i++){
                
               TreeNode* r=q.front();
                q.pop();
                
                if(r->left)
                {    
                    q.push(r->left);
                    v.push_back(r->left->val);
                }
                else
                    v.push_back(-1);
                
                if(r->right)
                {
                    q.push(r->right);
                    v.push_back(r->right->val);
                }
                
                else
                    v.push_back(-1);
            }
            for(int i=0;i<v.size();i++){
                if(f==1 && v[i]!=-1)
                    return false;
                if(v[i]==-1)
                    f=1;
            }
        }
        return true;
    }
};