// Last updated: 07/11/2025, 19:58:41
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) {
            return p == q;  
        }

       
        if (p->val != q->val) {
            return false;
        }

       
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
