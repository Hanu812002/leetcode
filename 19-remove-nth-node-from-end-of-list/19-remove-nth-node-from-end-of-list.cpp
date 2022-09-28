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
         ListNode* p=head;
        int c=0;
        while(p!=NULL){
            c++;
            p=p->next;
        }
        c=c-n-1;
        p=head;
        if(c==-1)
        {head=head->next;
            return head;}
        while(c!=0)
        {
            p=p->next;
            c--;
        }
        ListNode *q=p->next;
        p->next=q->next;
        q->next=NULL;
        delete q;
        return head;
    }
};