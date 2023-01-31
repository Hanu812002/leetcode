/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        ListNode *f=head;
        ListNode *s=head;
        while( f!=NULL && f->next!=NULL ){
            s=s->next;
            f=f->next->next;
            
            if(s==f)
            {
                s=head;
                while(s!=f){
                    s=s->next;
                    f=f->next;
                }
                return s;
            }
        }
     // ListNode *n=new ListNode(-1);
        return NULL;
    }
};