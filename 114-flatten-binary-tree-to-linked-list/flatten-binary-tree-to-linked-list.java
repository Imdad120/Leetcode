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


// 1- APPROACH 
// class Solution {
//     public void flatten(TreeNode root) {
//         if (root == null) return;
//         ArrayList<TreeNode> ans = new ArrayList<>();
//         dfs(root,ans);

//         for(int i = 0 ; i < ans.size()-1;i++){
//             TreeNode a = ans.get(i);
//             TreeNode b = ans.get(i+1);
//             a.right = b;
//             a.left= null;
//         }
//         TreeNode last = ans.get(ans.size()-1);
//         last.left = null;
//         last.right = null;
//     }
//     private static void dfs(TreeNode root , ArrayList<TreeNode> ans){
//          if(root == null) return;
//          ans.add(root);
//          dfs(root.left,ans);
//          dfs(root.right,ans);
//     }
// }