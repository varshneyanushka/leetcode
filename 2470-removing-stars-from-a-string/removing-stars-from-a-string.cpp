class Solution {
public:
    string removeStars(string s) {

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                if(i-1>=0)
                {
                     s.erase(i-1,2);
                    i=i-2;
                }
                else{
                    s.erase(i,1);
                    i=i-1;
                }
               
            }
        }
        return s;
        
    }
};