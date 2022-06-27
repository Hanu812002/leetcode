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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
         ListNode* l=new ListNode(-1);
      ListNode* res=l;
        
        while(l1 || l2){
            if(l1==NULL)
            {
                l->next=l2;
                break;
            }
            if(l2==NULL)
            {
                l->next=l1;
                break;
            }
            if(l1->val>l2->val){
        
                 ListNode* a=new ListNode(l2->val);
            l->next=a;
                l=l->next;
                l2=l2->next;
            }
             else{
        
                 ListNode* a=new ListNode(l1->val);
            l->next=a;
                l=l->next;
                l1=l1->next;
            }
            
        }
        return res->next;
        
    }
};