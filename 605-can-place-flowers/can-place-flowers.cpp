class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowers, int n) {
        int ans=0;
        vector<int> f;
        f=flowers;
        f.insert(f.begin(),0);
        f.push_back(0);
        for(int i=1;i<f.size()-1;i++)
        {
            
            if(f[i-1]==0 && f[i]==0 && f[i+1]==0)
            {
                f[i]=1;
                ans++;
            }
            
        }
        if(ans>=n){
                return true;
            }
            else{
                     return false;
            }
        
       
    }
};