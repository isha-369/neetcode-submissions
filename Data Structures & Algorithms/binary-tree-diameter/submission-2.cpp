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
    int diam=0;
    int height(TreeNode* root){
        if(!root) return 0;
        int d1=height(root->left);
        int d2=height(root->right);
        if(d1+d2>diam){
            diam =d1+d2;
        }
        return 1+max(d1,d2);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diam;
        
    }
};
