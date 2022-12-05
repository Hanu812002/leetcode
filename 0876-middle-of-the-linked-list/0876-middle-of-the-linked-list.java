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
    public ListNode middleNode(ListNode head) {
         int c=0;
        ListNode n=head;
        while(n!=null){
            c++;
            n=n.next;
        }
        c=c/2;
        while(head!=null){
            if(c==0)
                break;
            head=head.next;
            c--;
        }
        return head;
    }
}