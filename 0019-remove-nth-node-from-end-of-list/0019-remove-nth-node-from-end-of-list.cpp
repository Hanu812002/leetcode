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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        
        for(int i=0;i<n-1;i++)
            temp=temp->next;
        
        if(temp->next==NULL)
            return head->next;
        
        ListNode* l=head;
        ListNode* p=NULL;
        while(temp->next){
            temp=temp->next;
            p=l;
            l=l->next;
            
        }
                                    // cout<<p->val;
      if(l->next==NULL)
          p->next=NULL;
      else{
          p->next=l->next;
          l->next=NULL;
      }
        return head;
    }
};