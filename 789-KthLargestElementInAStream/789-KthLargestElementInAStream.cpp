// Last updated: 07/11/2025, 19:57:19
class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;
public:
int i=0;
vector<int> ans;
    KthLargest(int k, vector<int>& nums) {
        i=k;
        for(auto e:nums)
        {
            pq.push(e);
            if(pq.size()>k){pq.pop();}
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>i){pq.pop();}
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */