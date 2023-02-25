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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode* prev=NULL,*r=head;
        
        if(head==NULL)
            return NULL;
        
        
        while(r && r->val==val)
            r=r->next;
        
        head=r;
        
        while(r!=NULL){
            
            if(r->val==val){
                prev->next=r->next;
                r=r->next;
            }
            else{
            prev=r;
            r=r->next;
            }
        }
        
        return head;
    }
};