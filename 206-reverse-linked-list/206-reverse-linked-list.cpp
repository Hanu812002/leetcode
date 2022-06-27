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
    ListNode* reverseList(ListNode* l) {
         ListNode* q=NULL;
        ListNode* r=NULL;
        
        while(l!=NULL){
            q=r;
            r=l;
            l=l->next;
            r->next=q;
        }
       return r;
    
    }
};