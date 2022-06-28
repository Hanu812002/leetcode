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
       // if( head == NULL ||head->next == NULL) return NULL;
       //  ListNode * p = head;
       //  unordered_set<ListNode * > s;
       //  while(p != NULL){
       //      if(s.find(p) != s.end()) return p;
       //      s.insert(p);
       //      p = p->next;
       //  }
       //  return NULL; 
         if(!head)
            return NULL;
        ListNode*slow=head;
        ListNode*fast=head;
            while(fast && fast->next){
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast){
                    slow=head;
                    while(slow!=fast){
                        slow=slow->next;
                        fast=fast->next;
                    }
                    return slow;
                }
            }
      return NULL;
    }
};