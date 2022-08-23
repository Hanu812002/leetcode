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
    ListNode *temp;
    bool fun(ListNode* ne){
        if(ne ==NULL)
            return true;
        
      bool res = fun(ne->next) & (temp->val==ne->val);
        temp=temp->next;
        return res;
    }
    bool isPalindrome(ListNode* head) {
        
        
        temp=head;
      return  fun(head);
        
    
    }
};