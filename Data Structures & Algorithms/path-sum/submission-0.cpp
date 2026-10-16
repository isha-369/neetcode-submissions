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
    bool sumVal(TreeNode* root, int targetSum, int sum){
        if(!root) return false;

        if(!root->left && !root->right){
            sum+=root->val;
            return sum==targetSum;
        }
        sum+=root->val;
        return sumVal(root->left, targetSum, sum)||sumVal(root->right, targetSum, sum);
    

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        if(!root) return false;
        return sumVal(root,targetSum,sum);
        
    }
};