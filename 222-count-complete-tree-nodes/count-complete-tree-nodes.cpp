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
    int countNodes(TreeNode* root) {
        int ans=0;
        dfs(root,ans);
        return ans;
        
    }
    void dfs(TreeNode* root,int & ans)
    {
        if(!root){return;}
        ans++;
        dfs(root->left,ans);
        dfs(root->right,ans);
    }
};