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
    bool valid(TreeNode* root, int mini, int maxi) {
        if (!root) return true;
        if (mini >= root->val ||  maxi<=root->val) {
            return false;
        } 
        return valid(root->left, mini, root->val) && valid(root->right, root->val, maxi);
    }
    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        int mini = INT_MIN;
        int maxi = INT_MAX;
        return valid(root, mini, maxi);
    }
};
