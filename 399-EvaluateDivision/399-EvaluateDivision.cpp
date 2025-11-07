// Last updated: 07/11/2025, 19:57:31
class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        // Graph to store the equations
        map<string, vector<pair<string, double>>> graph;

        // Constructing the graph
        for (int i = 0; i < equations.size(); i++) {
            string u = equations[i][0];
            string v = equations[i][1];
            double weight = values[i];
            
            // Adding both directions
            graph[u].push_back({v, weight});
            graph[v].push_back({u, 1.0 / weight});
        }

        vector<double> ans;
        for (int i = 0; i < queries.size(); i++) {
            ans.push_back(bfs(queries[i][0], queries[i][1], graph));
        }
        return ans;
    }
    
    double bfs(string src, string target, map<string, vector<pair<string, double>>>& graph) {
        // If either the source or the target is not in the graph, return -1
        if (graph.find(src) == graph.end() || graph.find(target) == graph.end()) {
            return -1;
        }

        // BFS queue with pairs of node and accumulated product (weight)
        queue<pair<string, double>> q;
        q.push({src, 1.0});

        // Visited set to prevent revisiting nodes
        set<string> visit;
        
        while (!q.empty()) {
            auto x = q.front();
            string node = x.first;
            double weight = x.second;
            q.pop();

            // If the target node is found, return the corresponding weight
            if (node == target) {
                return weight;
            }

            // Mark the node as visited
            visit.insert(node);

            // Explore neighbors
            for (auto c : graph[node]) {
                if (visit.count(c.first) == 0) {
                    q.push({c.first, weight * c.second});
                }
            }
        }
        return -1; // If no path is found, return -1
    }
};
