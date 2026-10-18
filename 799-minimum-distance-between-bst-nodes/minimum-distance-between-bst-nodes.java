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
    public int minDiffInBST(TreeNode root) {
        
       ArrayList<Integer> ans =  new ArrayList<>();
       int min = Integer.MAX_VALUE;

       dfs(root,ans);

       for(int i = 1 ; i < ans.size(); i++){
        int dif = ans.get(i)- ans.get(i-1);
        min = Math.min(min,dif);
       }

       return min;
        
    }
    private void dfs(TreeNode root ,ArrayList<Integer> ans){
         
         if(root == null ) return ;
         dfs(root.left,ans);
         ans.add(root.val);
         dfs(root.right,ans);
    }
}