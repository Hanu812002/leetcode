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
    public void reorderList(ListNode head) {
          Stack<ListNode>s=new Stack<>();
        ListNode l=head;
        int c=0;
        while(l!=null)
        {
            c++;
            s.push(l);
            l=l.next;
        }
        l=head;
        for(int i=0;i<c/2;i++){
            ListNode t=l.next;
            ListNode end=s.pop();
            l.next=end;
            end.next=t;
            l=t;
        }
        l.next=null;
    }
}