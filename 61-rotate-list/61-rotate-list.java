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
    public ListNode rotateRight(ListNode head, int k) {
        
        if(head == null || head.next == null || k == 0) return head;
        int length = 1;
        ListNode n=head;
        while(n.next!=null){
            length++;
            n=n.next;
        }
        n.next=head;
        k=k%length;
        length=length-k;
        ListNode ne=head;
        while(length-->0){
            
            n=n.next;   
        }
        head=n.next;
        n.next=null;
        
        
        
        return head;
    }
}