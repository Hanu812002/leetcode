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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int c=0;
        int l=0;
        ListNode* temp=head;
        while(temp){
            l++;
            temp=temp->next;
        }
        
        if(l<k)
            return head;
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* t=NULL;
        
        while(curr && c<k){
            c++;
           t=curr->next;
            curr->next=prev;
            prev=curr;
            curr=t;
        }
        
        if(t!=NULL)
            head->next=reverseKGroup(t,k);
        
        return prev;
    }
};