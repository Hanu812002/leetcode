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
    public int countNodes(TreeNode root) {
        if(root==null)
            return 0;
        
        int l=1;
        TreeNode leftn=root.left;
        while(leftn!=null){
            l++;
            leftn=leftn.left;
        }
        
        int r=1;
       TreeNode rightn=root.right;
        while(rightn!=null){
            r++;
            rightn=rightn.right;
        }
        
        if(l==r){
            return (int)(Math.pow(2,l)-1);
        }
        
        return countNodes(root.left)+countNodes(root.right)+1; 
    }
}