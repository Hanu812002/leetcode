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
    ListNode* rotateRight(ListNode* head, int k) {
        
        
        ListNode* h=head;
        int len=0;
        while(h)
        {
            len++;
            h=h->next;
        }
        if(len==0 || len==k || k==0 || len==1)
            return head;
        
        h=head;
        
        k=k%len;
        
        cout<<len<<" "<<k<<endl;
        
        if(len==k || k==0)
            return head;
        
        
        int move=len-k;
        
        for(int i=0;i<move-1;i++)
        h=h->next;
        
        ListNode* n=h->next;
        
        h->next=NULL;
        
        h=n;
        
        while(n->next)
            n=n->next;
        
        n->next=head;
        
        head=h;
        
        return head;
    }
};