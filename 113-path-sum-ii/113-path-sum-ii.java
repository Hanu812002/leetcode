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
    public static void fun( List<List<Integer>>res, List<Integer>demo,TreeNode root, int t){
        if(root == null)
            return;
        if(root.right == null && root.left == null){
            if(t-root.val == 0)
            {
                List<Integer> d=new ArrayList(demo);
                d.add(root.val);
                res.add(d);
        }
            return;
        }
        demo.add(root.val);
        fun(res,demo,root.left,t-root.val);
        fun(res,demo,root.right,t-root.val);
        demo.remove(demo.size()-1);
    }
    public List<List<Integer>> pathSum(TreeNode root, int t) {
        List<List<Integer>> res=new ArrayList();
        List<Integer> demo=new ArrayList();
        fun(res,demo,root,t);
        
        return res;
    }
}