// Last updated: 07/11/2025, 19:56:52
class Solution {
public:
    double average(vector<int>& salary) {
        
        sort(salary.begin(),salary.end());
        double sum=0;
        for(int i=1;i<salary.size()-1;i++)
        {
            sum=sum+salary[i];
        }
        sum=sum/(salary.size()-2);
        return sum;
    }
};