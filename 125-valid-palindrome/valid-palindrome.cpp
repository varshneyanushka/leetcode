class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()){return true;}
        int n=s.length();
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
        
        cout<<news;

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