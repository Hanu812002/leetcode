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
    ListNode* partition(ListNode* head, int x) {
        ListNode* r=head;
        ListNode* prev=new ListNode(0);
        ListNode* ans=prev;
        ListNode* prev1=new ListNode(0);
        ListNode* ans1=prev1;
        while(r!=NULL){
             if(r->val<x){
                 ListNode* n=new ListNode(r->val);
                 ans->next=n;
                 ans=ans->next;
                 
             }
              else{
                 ListNode* n=new ListNode(r->val);
                 ans1->next=n;
                 ans1=ans1->next;
                  
              }
            r=r->next;
        }
        ans->next=prev1->next;
        
        return prev->next;
    }
};