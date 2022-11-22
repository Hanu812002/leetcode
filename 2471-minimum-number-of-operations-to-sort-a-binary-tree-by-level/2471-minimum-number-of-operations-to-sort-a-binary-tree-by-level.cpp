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
    int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>>v;
	    for(int i=0;i<nums.size();i++){
	        v.push_back({nums[i],i});
	        
	    }
	    sort(v.begin(),v.end());
	    int c=0;
	    for(int i=0;i<nums.size();i++){
	        while(v[i].second!=i){
	            swap(v[v[i].second],v[i]);
	            ++c;
	        }
	    }
	    return c;
	}
    int minimumOperations(TreeNode* root) {
         // vector<vector<int>>v;
        if(root==NULL)
            return 0;
        int c=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            
            int n=q.size();
            vector<int>v1;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                
                v1.push_back(t->val);
                if(t->left!=NULL){
                    q.push(t->left);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                }
            }
            c+=minSwaps(v1);
        }
    return c;
    }
};