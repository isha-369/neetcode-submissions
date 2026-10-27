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
    int diam = INT_MIN;
    int height(TreeNode* root) {
        if (!root) return 0;
        int h1 = height(root->left);
        int h2 = height(root->right);
        return 1+max(h1, h2);
    }
    void diameter(TreeNode* root) {
        if (!root) return;
        int h1 = height(root->left);
        int h2 = height(root->right);
        int maxi = h1 + h2;
        if (maxi > diam) {
            diam = maxi;
        }
        diameter(root->left);
        diameter(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        diameter(root);
        return diam;

    }
};
