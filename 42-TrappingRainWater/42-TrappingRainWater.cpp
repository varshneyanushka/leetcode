// Last updated: 07/11/2025, 19:59:00
class Solution {
public:
    int trap(vector<int> h) {
        int n=h.size();
        vector<int> right(n);
        vector<int>left(n);
        left[0]=h[0];
        for(int i=1;i<n;i++)
        {
            left[i]=max(h[i],left[i-1]);
        }
        right[n-1]=h[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(h[i],right[i+1]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(left[i],right[i])-h[i];
        }
        return ans;

        
    }
};