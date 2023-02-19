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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    
        if(head==NULL)
            return NULL;
    
        ListNode* ans=new ListNode(head->val);
        ListNode* r=ans;
        head=head->next;
        while(head!=NULL){
            // cout<<r->val<<"  "<<head->val<<endl;
            if(r->val!=head->val){
                ListNode* a=new ListNode(head->val);
                r->next=a;
                r=r->next;
            }

                head=head->next;
        }
        return ans;
    }
};