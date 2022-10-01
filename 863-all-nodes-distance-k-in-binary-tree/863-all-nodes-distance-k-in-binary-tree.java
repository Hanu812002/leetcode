/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public void fun(TreeNode root , Map<TreeNode , TreeNode>pa){
        Queue<TreeNode>q= new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()){
            TreeNode curr=q.poll();
            if(curr.left!=null){
                pa.put(curr.left,curr);
                q.offer(curr.left);
            }
              if(curr.right!=null){
                pa.put(curr.right,curr);
                q.offer(curr.right);
            }
        }
    }
    public List<Integer> distanceK(TreeNode root, TreeNode target, int k) {
        Map<TreeNode , TreeNode>pa=new HashMap<>();
        fun(root,pa);
        Map<TreeNode , Boolean>vis=new HashMap<>();
         Queue<TreeNode>q= new LinkedList<>();
        q.offer(target);
        int c=0;
        vis.put(target,true);
        while(!q.isEmpty()){
            int n=q.size();
            
            if(c==k)
                break;
            
        c++;
            for(int i=0;i<n;i++){
                TreeNode cur=q.poll();
                if(cur.left!=null && vis.get(cur.left)==null){
                    vis.put(cur.left,true);
                    q.offer(cur.left);
                }
             if(cur.right!=null && vis.get(cur.right)==null){
                    vis.put(cur.right,true);
                    q.offer(cur.right);
                }
                if(pa.get(cur)!=null && vis.get(pa.get(cur))==null){
                    vis.put(pa.get(cur),true);
                    q.offer(pa.get(cur));
                }
            }
                
        }
        
        List<Integer>l=new ArrayList<>();
        while(!q.isEmpty()){
            TreeNode arr=q.poll();
            l.add(arr.val);
        }
        
        return l;
    }
}