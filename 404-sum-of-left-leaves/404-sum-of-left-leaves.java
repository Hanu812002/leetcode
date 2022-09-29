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
//     int isleaf(root){
//         if(root.left==null && root.right==null)
//             return 1;
//         return 0;
        
//     }
    int s=0;
    public int sumOfLeftLeaves(TreeNode root) {
      fun(root,false);
        return s;
    }
    void fun(TreeNode root,boolean is){
        if(root==null)
            return ;
        
        if(is && root.left==null && root.right==null)
            s+=root.val;
        
        fun(root.left,true);
        fun(root.right,false);
    }
}