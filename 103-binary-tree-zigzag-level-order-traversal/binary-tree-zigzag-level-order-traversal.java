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
    class pair{
        TreeNode root;
        int level;
        pair(TreeNode root , int level){
            this.root = root;
            this.level = level;
        }
    }
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        if(root == null) return ans;

        Queue<pair> q = new LinkedList<>();
        q.add(new pair(root,0));
        
        while(!q.isEmpty()){
           
            int size = q.size();
            List<Integer> temp = new ArrayList<>();
            int level = q.peek().level;

            for(int i = 0 ; i < size ;i++){
                pair p =q.remove();
                TreeNode node = p.root;

                temp.add(node.val);
                if(node.left != null) q.add(new pair(node.left, p.level+1));
                if(node.right != null ) q.add(new pair(node.right , p.level+1));
            }
            
                if (level % 2 == 0) {
                    ans.add(temp);
                } else {
                    Collections.reverse(temp);
                    ans.add(temp);
                }
        }
        return ans;
    }
}