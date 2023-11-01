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
    map<int,int>mp;
    void fun(TreeNode* r){
        if(r==NULL)
            return;
        mp[r->val]++;
        fun(r->left);
        fun(r->right);
    }
    vector<int> findMode(TreeNode* root) {
        fun(root);
           vector<int>ans;
         int maxValue =  INT_MIN;
		
        for(auto i: mp){               
            if(maxValue < i.second){
                maxValue = i.second;
            }
        }
		
        for(auto i: mp){                                       
            if(i.second == maxValue){
                ans.push_back(i.first);
            }
        }
        return ans;
        
        
    }
};