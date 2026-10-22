// 2- APPROACH BY RECURSION
class Solution {
    public void flatten(TreeNode root) {
        if(root == null ) return ;
        TreeNode LST = root.left;
        TreeNode RST = root.right;
        root.left = null;
        root.right = null;
        flatten(LST);
        flatten(RST);

        root.right = LST;
        TreeNode last = root;
        while(last.right!=null) last = last.right;
        last.right = RST;
    }
}