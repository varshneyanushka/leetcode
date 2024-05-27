class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=INT_MIN;
        int l=0; int n=s.length();int r=k;
        int curr=0;
     
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                curr++;
            }
        }
        ans=curr;
        while(r<n)
        {   
            if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')
            {
                curr--;
            }
            l++;
            if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u')
            {
                curr++;
            }
            r++;
           
            ans=max(curr,ans);
        }
       return ans;
        
    }
};