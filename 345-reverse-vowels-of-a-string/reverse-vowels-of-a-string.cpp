class Solution {
public:
    string reverseVowels(string s) {
        vector<char> temp;
        for(int i=0;i<s.length();i++)
        {
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u')
            {
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<s.length();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u')
            {
                char t;
                t=temp.back();
                temp.pop_back();
                s[i]=t;
            }

        }
        return s;

    }
};