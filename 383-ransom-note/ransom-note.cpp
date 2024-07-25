class Solution {
public:
    bool canConstruct(string r, string m) {
        
        vector<int> ran(26);
        vector<int> mag(26);
        for(int i=0;i<r.size();i++)
        {
            int temp;
            temp= int(r[i])-int('a');
            ran[temp]++;
        }

        for(int i=0;i<m.size();i++)
        {
            int temp;
            temp= int(m[i])-int('a');
            mag[temp]++;
        }
        for(int i=0;i<26;i++)
        {
            if(ran[i]>0)
            {
                if(ran[i]>mag[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};