// Last updated: 07/11/2025, 19:58:31
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
         if (!root) return nullptr;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                Node* node=q.front();
          
                if(node->left){
                    q.push(node->left);
                }

                if(node->right){
                    q.push(node->right);
                }
                q.pop();
                if(i!=l-1)
                {
                    
                    node->next=q.front();
                }
                else
                {
                    node->next=nullptr;
                }
                
            }
            
        }
        return root;
    }
};