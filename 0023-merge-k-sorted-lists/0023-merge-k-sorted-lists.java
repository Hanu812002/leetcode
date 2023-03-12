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
    public ListNode mergeKLists(ListNode[] lists) {
         PriorityQueue<Integer>q=new PriorityQueue<Integer>();
         for(ListNode n : lists){
             while(n!=null){
                 q.add(n.val);
                 n=n.next;
             }
         }
        System.out.println(q.size());
        ListNode l=new ListNode(0);
        ListNode ans=l;
        while(!q.isEmpty()){
            ListNode l1=new ListNode(q.poll());
            l1.next=null;
           q.peek();
             l.next=l1;
            l=l.next;
        }
        return ans.next;
    }
}