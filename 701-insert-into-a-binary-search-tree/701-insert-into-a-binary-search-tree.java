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
    public TreeNode insertIntoBST(TreeNode root, int val) {
         TreeNode r=root;
         if(r==null){
             TreeNode l=new TreeNode(val);
             return l;
         }
        while(r!=null){
            if(r.val==val)
            return root;
            
            else if(r.val>val){
                if(r.left==null){
                    TreeNode l=new TreeNode(val);
                    r.left=l;
                }
                else 
                 r=r.left;
            }
            else {
                if(r.right==null){
                    TreeNode l=new TreeNode(val);
                    r.right=l;
                }
                else 
                 r=r.right;
            }
        }
        return root;
    }
}