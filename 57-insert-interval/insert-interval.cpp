class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newi) {
        vector<vector<int>> ans;
        vector<int> temp;
         if(intervals.empty())
        {
            intervals.push_back(newi);
        }
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][1]<newi[0] || newi[1]<intervals[i][0] )
            {
                ans.push_back(intervals[i]);
            }
            else{
                newi[0]=min(newi[0],intervals[i][0]);
                newi[1]=max(newi[1],intervals[i][1]);

            }

        }
       

        for(int i=ans.size()-1;i>=0;i--)
        {
           if(newi[0]>intervals[i][1])
           {
               ans.insert(ans.begin()+i+1,newi);
               break;
           }
        if(i==0){
           
            ans.insert(ans.begin(),newi);
               break;
        }

        }
        if(ans.empty())
        {
            ans.push_back(newi);
        }
      // cout<<"1:"<<newi[0]<<endl;
       //cout<<"2:"<<newi[1]<<endl;

        return ans;

    }
};