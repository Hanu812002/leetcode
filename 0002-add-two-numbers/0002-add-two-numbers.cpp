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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* x=new ListNode(-1);
        ListNode* t=x;
        int c=0;
        while(t1 || t2){
            int a=0;
            int b=0;
            if(t1)
            a=t1->val;
            if(t2)
             b=t2->val;
            int A=a+b+c;
            if(A>9)
                c=1;
            else
                c=0;
            
        

             t=t->next=new ListNode(A%10);
            if(t1==NULL)
                t1=NULL;
            else
                t1=t1->next;
            if(t2==NULL)
                t2=NULL;
            else
                t2=t2->next;
            
        }
        if(c)
          t->next=new ListNode(1);
       return x->next;
    }
};