
class Solution {
public:
    bool fun(long m,long n,TreeNode* r){
        if(r==NULL)
            return true;
        if(m>=r->val || n<=r->val)
            return false;
        return fun(m,r->val,r->left) && fun(r->val,n,r->right);
    }
    bool isValidBST(TreeNode* root) {
      return fun(LONG_MIN,LONG_MAX,root);
        
    }
};