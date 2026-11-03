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
    int sum = 0;

    public TreeNode bstToGst(TreeNode root) {
        GST(root);
        return root;
    }

    void GST(TreeNode root) {
        if (root == null) return;

        GST(root.right);

        sum += root.val;
        root.val = sum;

        GST(root.left);
    }
}


// class Solution {
//     public TreeNode bstToGst(TreeNode root) {
//         ArrayList<Integer> arr = new ArrayList<>();
//         inorder(root,arr);
//         return arr;
//     }
//     void inorder(TreeNode root , ArrayList<Integer> arr){
//         if(root == null) return ; 
//         inorder(root.left , arr);
//         arr.add(root.val);
//         inorder(root.right,arr);
//     }
//     public static int GST(ArrayList<Integer>arr){
//         for(int i = arr.size()-2; i >=0;i--){
//             arr.set(i,arr.get(i)+arr.get(i+1));
//         }
//         return arr;
//     }
// }