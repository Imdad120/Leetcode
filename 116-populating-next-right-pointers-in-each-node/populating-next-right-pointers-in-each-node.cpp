class Solution {
public:
    Node* connect(Node* root) {

        if(root == NULL) {
            return NULL;
        }

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {

            int level_size = q.size();

            for(int i = 0; i < level_size; i++) {

                Node* curr_node = q.front();
                q.pop();

                // Connect to next node in same level
                if(i < level_size - 1) {
                    curr_node->next = q.front();
                }
                else {
                    curr_node->next = NULL;
                }

                // Add children
                if(curr_node->left != NULL) {
                    q.push(curr_node->left);
                }

                if(curr_node->right != NULL) {
                    q.push(curr_node->right);
                }
            }
        }

        return root;
    }
};