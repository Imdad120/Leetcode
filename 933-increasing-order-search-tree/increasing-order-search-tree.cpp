/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void Inorder(TreeNode* root, vector<TreeNode*>& arr) {
        if (root == NULL)
            return;

        Inorder(root->left, arr);
        arr.push_back(root);
        Inorder(root->right, arr);
    }

    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> arr;
        Inorder(root, arr);

        TreeNode* dummy = new TreeNode(0);
        TreeNode* curr = dummy;

        for (auto node : arr) {
            node->left = NULL;
            node->right = NULL;

            curr->right = node;
            curr = node;
        }

        return dummy->right;
    }
};