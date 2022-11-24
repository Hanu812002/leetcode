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
    void inorder(TreeNode* root , vector<int> &inorderVal){
        if(root == NULL)
            return;
        
        inorder(root->left , inorderVal);
        inorderVal.push_back(root->val);
        inorder(root->right , inorderVal);
        
    }
    
    int getMinimumDifference(TreeNode* root) {
        //find the inorder
        vector<int> inorderVal;
        inorder(root , inorderVal);
        
        //traverse the inorder array to find the minimum absolute difference
        int mini = INT_MAX;
        
        for(int i = 0 ; i < inorderVal.size() - 1 ; i++){
            int diff = abs(inorderVal[i] - inorderVal[i+1]);
            
            if(diff < mini)
                mini = diff;
        }
        
        return mini;
        
    }
};