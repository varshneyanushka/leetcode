// Last updated: 07/11/2025, 19:58:42
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
    vector <int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        
        TreeNode* temp=root;
        
        if(temp!=nullptr)
        {
            inorderTraversal(temp->left);
            ans.push_back(temp->val);
            inorderTraversal(temp->right);

        }
        return ans;
    }
};