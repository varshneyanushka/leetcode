// Last updated: 07/11/2025, 19:58:36
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // Keep track of the current root index in postorder array
        int postIndex = postorder.size() - 1;
        return helper(inorder, postorder, 0, inorder.size() - 1, postIndex);
    }
    
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int& postIndex) {
        // Base case
        if (inStart > inEnd) {
            return nullptr;
        }
        
        // The current root's value is the last element in the current postorder range
        int val = postorder[postIndex--];
        TreeNode* root = new TreeNode(val);
        
        // Find the root value in inorder array to split the left and right subtrees
        int inIndex = 0;
        for (int i = inStart; i <= inEnd; ++i) {
            if (inorder[i] == val) {
                inIndex = i;
                break;
            }
        }
        
        // Recursively build the right and left subtrees
        root->right = helper(inorder, postorder, inIndex + 1, inEnd, postIndex);
        root->left = helper(inorder, postorder, inStart, inIndex - 1, postIndex);
        
        return root;
    }
};
