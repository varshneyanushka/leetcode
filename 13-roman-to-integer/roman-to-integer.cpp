class Solution {
public:
    int romanToInt(string s) {
       map<char, int> map = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int n =s.length();
    int ans=0;
    char pop='I';
    for(int i=n-1;i>=0;i--)
    {
        if((pop=='V'||pop=='X') && s[i]=='I')
        {
            ans=ans-map[s[i]];
        }
        else if((pop=='L'||pop=='C') && s[i]=='X')
        {
            ans=ans-map[s[i]];
        }
        else if((pop=='D'||pop=='M') && s[i]=='C')
        {
            ans=ans-map[s[i]];
        }
        else{
            ans=ans+map[s[i]];
        }
        pop=s[i];

    }
        return ans;
        
    }
};