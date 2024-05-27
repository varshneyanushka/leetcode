class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=INT_MIN;
        int l=0; int n=s.length();int r=k;
        int curr=0;
        string temp=s;
        for(int i=0;i<k;i++)
        {
            if(temp[i]=='a'||temp[i]=='e'||temp[i]=='i'||temp[i]=='o'||temp[i]=='u')
            {
                curr++;
            }
        }
        ans=curr;
        while(r<n)
        {   
            if(temp[l]=='a'||temp[l]=='e'||temp[l]=='i'||temp[l]=='o'||temp[l]=='u')
            {
                curr--;
            }
            l++;
            if(temp[r]=='a'||temp[r]=='e'||temp[r]=='i'||temp[r]=='o'||temp[r]=='u')
            {
                curr++;
            }
            r++;
           
            ans=max(curr,ans);
        }
       return ans;
        
    }
};