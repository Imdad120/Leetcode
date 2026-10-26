
class Solution {
    public TreeNode insertIntoBST(TreeNode root, int key) {
        if(root == null) return new TreeNode(key);
        insert(root,key);
        return root;
    }
    void insert(TreeNode root , int key){
       
         if(root.val == key) return ;
         if(root.val > key){
           if(root.left == null) root.left = new TreeNode(key);
           else insert(root.left,key);
         }
         else{
            if(root.right == null) root.right = new TreeNode(key);
            else insert(root.right,key);
         }
    }
}