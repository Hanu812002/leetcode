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
            return head;
         ListNode* prev=head;
        ListNode* curr=NULL;
        if(prev->next)
            curr=prev->next;
        else
            return head;
        // cout<<curr->val<<endl;
        
        while(curr->next){
            
            // cout<<prev->val<<"   "<<curr->val<<endl;
            while(curr->next && prev->val==curr->val)
            {  
                
                curr=curr->next;
            
            }
           
            
            if(prev->val != curr->val)
                
            {   
                // cout<<prev->val<<"  hhh "<<curr->val<<endl;
                prev->next=curr;
                 prev=prev->next;
                if(curr->next)
                curr=curr->next;
                // cout<<prev->val<<"  hhhh "<<curr->val<<endl;

            }
            
        }
         
            if(curr->next==NULL && prev->val==curr->val){
                // prev=prev->next;
                prev->next=NULL;
            }
        
        return head;
    }
};