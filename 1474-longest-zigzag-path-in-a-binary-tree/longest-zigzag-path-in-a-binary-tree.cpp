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
int ans=0;
    void helper(TreeNode* root,int m,int flag)
    {
        if(!root){return ;}
        ans=max(m,ans);
        if(flag==0)
        {
            
                
                helper(root->right,m+1,1);
                helper(root->left,1,0);
            
        }
        else
        {
           
                
                helper(root->left,m+1,0);
                helper(root->right,1,1);
            

        }
        return ;
    }
    
    
    
    int longestZigZag(TreeNode* root) {
        
        helper(root->right,1,1);
        helper(root->left,1,0);
        
        
        return ans;
    }
};