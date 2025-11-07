// Last updated: 07/11/2025, 19:56:29
class Solution {
public:
    string sortVowels(string s) {
        string vowels="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                vowels+=s[i];
            }
        }
        sort(vowels.begin(),vowels.end());
        int l=0;
        string t="";

        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                t+=vowels[l];l++;
            }
            else
            {
                t+=s[i];
            }
        }
        return t;




    }
};