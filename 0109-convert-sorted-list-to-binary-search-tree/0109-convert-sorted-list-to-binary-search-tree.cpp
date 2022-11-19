/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        
        
        if(head==NULL)return NULL;
        
        if(head->next==NULL)
            return new TreeNode(head->val);
        
         ListNode* s=head;
        ListNode* f=head;
        ListNode* pre=head;
        while( f!=NULL && f->next!=NULL){
            pre=s;
            s=s->next;
            f=f->next->next;
        }
        
        pre->next=NULL;
        
        TreeNode* r=new TreeNode(s->val);
        r->left=sortedListToBST(head);
        r->right=sortedListToBST(s->next);
        return r;
    }
};