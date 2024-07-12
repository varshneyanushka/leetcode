class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
         vector<vector<double>> curr(n, vector<double>(n, 0));
         vector<vector<double>> next(n, vector<double>(n, 0));

         vector<vector<double>> temp(n, vector<double>(n, 0));
         curr[row][column]=1;
        for(int q=0;q<k;q++)
        {
            int ni=0;int nj=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    ni=i+1;nj=j+2;
                    if(isvalid(ni,nj,n)){
                        next[ni][nj]+=curr[i][j]/8.0;
                    }

                    ni=i+2;nj=j+1;
                    if(isvalid(ni,nj,n)){
                        next[ni][nj]+=curr[i][j]/8.0;
                    }

                     ni=i+1;nj=j-2;
                    if(isvalid(ni,nj,n)){
                        next[ni][nj]+=curr[i][j]/8.0;
                    }

                     ni=i+2;nj=j-1;
                    if(isvalid(ni,nj,n)){
                        next[ni][nj]+=curr[i][j]/8.0;
                    }

                     ni=i-1;nj=j+2;
                    if(isvalid(ni,nj,n)){
                        next[ni][nj]+=curr[i][j]/8.0;
                    }

                     ni=i-2;nj=j+1;
                    if(isvalid(ni,nj,n)){
                        next[ni][nj]+=curr[i][j]/8.0;
                    }

                     ni=i-1;nj=j-2;
                    if(isvalid(ni,nj,n)){
                        next[ni][nj]+=curr[i][j]/8.0;
                    }
                     ni=i-2;nj=j-1;
                    if(isvalid(ni,nj,n)){
                        next[ni][nj]+=curr[i][j]/8.0;
                    }


                }
            }
            curr=next;
            next=temp;
        }
        double ans=0;
        for(int i=0;i<n;i++)
        {
             for(int j=0;j<n;j++)
             {
                cout<<i<<j<<". "<<curr[i][j]<<endl;
                ans+=curr[i][j];
             }
            
        }
        return ans;
    }

    bool isvalid(int i,int j,int n)
    {
        if(i>=0 && j>=0 && i<n && j<n)
        {
            return true;
        }
        return false;
    }
};