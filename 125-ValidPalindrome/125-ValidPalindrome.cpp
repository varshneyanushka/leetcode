// Last updated: 07/11/2025, 19:58:25
class Solution {
public:
    bool isPalindrome(string s) {
       
        int n=s.length();
         if(s.empty() || n==1 ){return true;}
        string news;
        for(int i=0;i<n;i++)
        {
            if(tolower(s[i])>=97 && tolower(s[i])<=122 )
            {news+=tolower(s[i]);}
            if(s[i]<=57 && s[i]>=48)
            {
                news+=s[i];
            }
        }
        int m=news.size();
        
       

        int i=0;int j=m-1;
        while(i<j)
        {
            if(news[i]==news[j])
            {
                i++;j--;
            }
            else{return false;}
        }
        return true;
        

    }
};