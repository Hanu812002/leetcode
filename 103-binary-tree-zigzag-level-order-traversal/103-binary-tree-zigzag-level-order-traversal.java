/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode node) {
        Queue<TreeNode> q = new ArrayDeque<>();
        boolean f=true;
        if(node!=null)
        q.add(node);
        
        List<List<Integer>> al = new ArrayList<>();
        
        while(q.size()>0){
            int count = q.size();
            List<Integer>li = new ArrayList<>();
            for(int i=1;i<=count;i++){
               TreeNode rem = q.remove();
                li.add(rem.val);
                if(rem.left!=null)
                q.add(rem.left);
                if(rem.right!=null)
                q.add(rem.right);
            }
            if(f==false)
                Collections.reverse(li);
            
            f=!f;
                
            al.add(li);
        }
        return al;
    }
}