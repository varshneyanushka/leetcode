/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
         if (node == nullptr) return nullptr;
        unordered_map<Node*,Node*> copy;

       return dfs(node,copy);
        
    }
    Node* dfs(Node* node, unordered_map<Node*,Node*> &copy)
    {
        if(copy.find(node) != copy.end())
        {
            return copy[node];
        }
       Node* vertice = new Node(node->val);
        copy[node]=vertice;
        

        for(Node* nei :node->neighbors)
        {
            vertice->neighbors.push_back(dfs(nei,copy));
        }
        return vertice;

        
    }
    
};