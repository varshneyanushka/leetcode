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
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
    int index = 0;
    return helper(pre, in, index, 0, in.size() - 1);
}

TreeNode* helper(vector<int>& pre, vector<int>& in, int& index, int i, int j) {
    if (i > j) {
        return nullptr;
    }
    
    // Root value from preorder
    int rootVal = pre[index];
    TreeNode* root = new TreeNode(rootVal);
    
    // Find root value in inorder
    int split = 0;
    for (int k = 0; k < in.size(); k++) {
        if (pre[index] == in[k]) {
            split = k;
            break;
        }
    }
    index++;
    
    // Construct left and right subtrees recursively
    root->left = helper(pre, in, index, i, split - 1);
    root->right = helper(pre, in, index, split + 1, j);
    
    return root;
}

    
};