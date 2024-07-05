// get all node values in a vector and sort it to get the kth smallest value
class Solution {
public:
    vector<int> v;
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        sort(v.begin(),v.end());
        
        return v[k-1];
    }
    void dfs(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
         v.push_back(root->val);
         
         dfs(root->left);
         dfs(root->right);
         return;
    }
};