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
int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        // sum(root,low)
        if(!root) return 0;
        if(root->val>=low && root->val<=high){
            sum+=root->val;
        }
        sum+rangeSumBST(root->left,low,high);
        sum+rangeSumBST(root->right,low,high);
        // sum= s1+s2;
        return sum;
        // return rangeSumBST(root->left,low,high) && rangeSumBST(root->right, low,high);
    }
};