// Last updated: 07/11/2025, 19:58:33
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, targetSum, 0);
    }
    
    bool dfs(TreeNode* root, int targetSum, int sum) {
        if (!root) return false;
        
        sum += root->val;

        // If it's a leaf node, check if the path sum equals the targetSum
        if (!root->left && !root->right) {
            return sum == targetSum;
        }
        
        // Recur for the left and right subtrees
        return dfs(root->left, targetSum, sum) || dfs(root->right, targetSum, sum);
    }
};
