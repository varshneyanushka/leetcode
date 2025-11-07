// Last updated: 07/11/2025, 19:58:14
class Solution {
public:
    vector<int> twoSum(vector<int> num, int target) {
        vector<int>ans;
        int n=num.size();
        int p=n-1;
        for(int i=0;i<n;i++)
        {
            if(num[i]>=target)
            {
                p=i;
            }
        }
        int i=0;int j=p;
        while(i<j)
        {
            if(num[i]+num[j]<target)
            {
                i++;

            }
            else if(num[i]+num[j]>target)
            {
                j--;
            }
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        
        }
        return ans;

    }
};