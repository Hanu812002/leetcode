
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode();
        dummy->next= head;
        ListNode *curr= head;
        ListNode *prev=dummy;
        
        while(curr){
            while(curr->next && curr->val==curr->next->val){
                curr=curr->next;
            }
            if(prev->next==curr)
            {
                cout<<"YES"<<curr->val<<endl;
                prev=prev->next;
        }
            else
                prev->next=curr->next;
            curr=curr->next;
        }
        
        return dummy->next;
    }
};