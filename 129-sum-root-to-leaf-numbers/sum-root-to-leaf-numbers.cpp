class Solution {
public:
    void DFS(TreeNode* root, int cn, int &sum) {
        if (root == NULL)
            return;

        cn = cn * 10 + root->val;

        if (root->left == NULL && root->right == NULL) {
            sum += cn;
            return;
        }

        DFS(root->left, cn, sum);
        DFS(root->right, cn, sum);
    }

    int sumNumbers(TreeNode* root) {
        int sum = 0;
        DFS(root, 0, sum);
        return sum;
    }
};