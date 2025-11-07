// Last updated: 07/11/2025, 19:57:56
// get all node values in a vector and sort it to get the kth smallest value
class Solution {
public:
    vector<int> v;
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        
        
        return v[k-1];
    }
    void dfs(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        
         
         dfs(root->left);
             v.push_back(root->val);
         dfs(root->right);
         return;
    }
};