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
    public TreeNode convertBST(TreeNode root) {
        Stack<TreeNode> stack = new Stack<>();

        TreeNode current = root;
        int sum = 0;

        while (current != null || !stack.isEmpty()) {

            // Go to the rightmost node
            while (current != null) {
                stack.push(current);
                current = current.right;
            }

            // Process node
            current = stack.pop();

            sum += current.val;
            current.val = sum;

            // Now process left subtree
            current = current.left;
        }

        return root;
    }
}