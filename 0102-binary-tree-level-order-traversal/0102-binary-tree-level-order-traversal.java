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
    public void LevelOrder(TreeNode root,List<List<Integer>> ans){
        if(root==null) return;
        Queue<TreeNode> track=new LinkedList<>();
        track.add(root);
        while(!track.isEmpty()){
            int len=track.size();
            ArrayList<Integer> temp=new ArrayList<>();
            
            for(int i=0;i<len;i++){
                TreeNode top=track.poll();
                temp.add(top.val);
                if(top.left!=null) track.offer(top.left);
                if(top.right!=null) track.offer(top.right);
            }
            ans.add(temp);
        }
    } 
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans=new ArrayList<>();
        LevelOrder(root,ans);
        return ans;
    }
}