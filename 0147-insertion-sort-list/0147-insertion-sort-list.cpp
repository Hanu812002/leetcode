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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>v;
        
        ListNode* h=head;
        
        while(h!=NULL){
            v.push_back(h->val);
            h=h->next;
        }
        sort(v.begin(),v.end());
        h=head;
        for(int i=0;i<v.size();i++){
            h->val=v[i];
            h=h->next;
        }
        return head;
    }
};