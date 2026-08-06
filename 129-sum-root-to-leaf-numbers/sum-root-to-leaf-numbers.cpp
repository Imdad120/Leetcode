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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        stack<pair<TreeNode*,int>>st;
        st.push(make_pair(root,0));
        while(!st.empty()){
            pair<TreeNode*,int> p = st.top();
            st.pop();
                   TreeNode*root =p.first;
                   int cn = p.second;

                   cn = cn*10+root->val;
                   if(root->left == NULL && root->right == NULL){
                    sum = sum +cn;

                   }

                   else {
                    if(root->left != NULL)
                    st.push(make_pair(root->left,cn));
                    if(root->right != NULL)
                    st.push(make_pair(root->right,cn));
                   }
        }
        return sum;
        
    }
};