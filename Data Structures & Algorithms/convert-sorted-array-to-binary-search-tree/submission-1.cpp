// class TreeNode {
//    public:
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode() {}
//     TreeNode(int x) {
//         val = x;
//         left = NULL;
//         right = NULL;
//     }
// };
class Solution {
   public:
    TreeNode* construct(int i, int j, vector<int>& nums) {
        if (i > j) return NULL;
        int mid = (i + j) / 2;
        int val = nums[mid];
        TreeNode* newNode = new TreeNode(val);
        newNode->left = construct(i,mid-1,nums);
        newNode->right = construct(mid+1,j,nums);
        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        // TreeNode* newNode=NULL;
        return construct(i,j,nums);
    }
};
