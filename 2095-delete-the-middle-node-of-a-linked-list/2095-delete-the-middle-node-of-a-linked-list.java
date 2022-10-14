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
    public ListNode deleteMiddle(ListNode head) {
        if(head.next==null)
            return null;
        ListNode f=head;
        ListNode s=head;
        ListNode c=null;
        while(f.next!=null && f.next.next!=null){
           
            f=f.next.next;
            c=s;
            s=s.next;
        }
        if(f.next!=null){
            s.next=s.next.next;
        }
        else{
            c.next=s.next;
        }
        return head;
    }
}