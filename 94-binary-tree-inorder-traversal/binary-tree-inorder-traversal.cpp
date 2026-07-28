class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;

        TreeNode* curr = root;

        while (curr != NULL || !st.empty()) {

            // Go to the leftmost node
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }

            // Visit the node
            curr = st.top();
            st.pop();
            ans.push_back(curr->val);

            // Move to the right subtree
            curr = curr->right;
        }

        return ans;
    }
};