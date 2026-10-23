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
    void smallest(TreeNode* root, int &k, int& num) {
        if (!root|| k<=0) return;
        smallest(root->left, k,num);
        if (k == 1) {
            num=root->val;
           k--;
        } else{
            k--;
        }
        smallest(root->right, k,num);
    }
    int kthSmallest(TreeNode* root, int k) {
        int num;
        smallest(root,k,num);
        return num;
    }
};
