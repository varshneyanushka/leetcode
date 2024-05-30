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

    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> r1=dfs(root1);
        r.clear();
        vector<int> r2=dfs(root2);
        r.clear();
        return (r1==r2);
    }
    vector<int> r;
    vector<int>dfs(TreeNode* root)
    {
        if(root==NULL)
        {
            return r;
        }
        if(root->left==NULL && root->right==NULL)
        {
            r.push_back(root->val);
            return r;
        }
        
        dfs(root->left);
        dfs(root->right);
        return r;
    }
};