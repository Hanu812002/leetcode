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
    public ListNode reverseList(ListNode head) {
        ListNode p=head;
        ListNode r=null;
        ListNode t=null;
        while(p!=null){
            t=p.next;
            p.next=r;
            r=p;
            p=t;
        }
        return r;
    }
}