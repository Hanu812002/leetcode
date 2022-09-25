/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    
    public ListNode reverseKGroup(ListNode head, int k) {
        int c=0;
        
        int length=0;
        ListNode n=head;
        while(n!=null){
            length++;
            n=n.next;
        }
        if(length<k)
            return head;
ListNode parso=null;
ListNode aaj=head;
ListNode kal=null;

while(aaj!=null && c<k ) { 
kal=aaj.next;
aaj.next=parso;
parso=aaj;
aaj=kal;
c++;
}

if(kal!=null)
{

head.next=reverseKGroup(kal, k);

}

return parso;
    }
    
}