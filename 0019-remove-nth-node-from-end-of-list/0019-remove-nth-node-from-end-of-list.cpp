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
    int length(ListNode* head){
        int c=0;
        
        while(head!=NULL){
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head==NULL)
           return head;
        
        
        int len=length(head);
        ListNode* r=head;
        
        int d=len-n;
        
        if(d==0)
        {
            head=head->next;
            return head;
        }
        
        for(int i=1;i<d;i++){
            r=r->next;
        }
        
        if(n==1){
         r->next=NULL;   
        }
        else{
        ListNode* l=r->next;
        r->next=l->next;
        delete(l);
        }
        
        // cout<<len<<endl;
        return head;
    }
};