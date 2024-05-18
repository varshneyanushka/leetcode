class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowers, int n) {
        int ans=0;
        vector<int> f;
        f=flowers;
        
        for(int i=0;i<f.size();i++)
        {
            if(f[i]==0){
                if(f.size()==1){
                    ans++;
                    f[i]=1;
                } else {
                    if(i==0) {
                        if(f[i+1]==0){
                            ans++;
                            f[i]=1;
                        }
                    }
                    else if(i==f.size()-1 ){
                            if(f[i-1]==0){
                                ans++;
                                f[i]=1;
                            }
                    } else if(f[i-1]==0 && f[i+1]==0){
                        ans++;
                        f[i]=1;
                    }

                }
            }
            
        }
        
        if(n <= ans){
            return true;
        }else {
            return false;
        }
    }
};