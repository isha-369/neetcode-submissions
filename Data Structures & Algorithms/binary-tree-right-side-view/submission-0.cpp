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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> vec;
        while (!q.empty()) {
            int size = q.size();
            while (size - 1) {
                TreeNode* data = q.front();
                q.pop();
                size--;
                if (data->left) {
                    q.push(data->left);
                }
                if (data->right) {
                    q.push(data->right);
                }
            }
            vec.push_back(q.front()->val);
            if (q.front()->left) {
                q.push(q.front()->left);
            }
            if (q.front()->right) {
                q.push(q.front()->right);
            }
            q.pop();

        }
        return vec;
    }
};
