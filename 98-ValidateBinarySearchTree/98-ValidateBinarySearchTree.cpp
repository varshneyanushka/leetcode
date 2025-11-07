// Last updated: 07/11/2025, 19:58:39
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
vector<int> n;
    bool isValidBST(TreeNode* root) {
       dfs(root);
       vector<int> temp=n;
       sort(temp.begin(),temp.end());
       for(int i=0;i<temp.size()-1;i++)
       {
        if(temp[i]==temp[i+1])
        {
            return false;
        }
       }
       return(temp==n);
    }
    void dfs(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        dfs(root->left);
        n.push_back(root->val);
        dfs(root->right);
        return;
    }
    
};