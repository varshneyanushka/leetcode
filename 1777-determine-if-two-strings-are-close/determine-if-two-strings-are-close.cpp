class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        if(n!=m)
        {
            return false;

        }
        map<char,int> m1;
        map<char,int> m2;
        for(char c:word1)
        {
            m1[c]++;
        }

        for(char c:word2)
        {
            m2[c]++;
        }
        vector<char> c1;
        vector<char> c2;
      

        vector<int> v1;
        for (auto it = m1.begin(); it != m1.end(); ++it) 
        {
           c1.push_back(it->first);
           v1.push_back(it->second);
        }


        vector<int> v2;
        for (auto it = m2.begin(); it != m2.end(); ++it) 
        {
           c2.push_back(it->first);
           v2.push_back(it->second);
        }
    
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

         sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());

        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i];
        }
        cout<<endl;
        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i];
        }
        
        if(v1==v2 && c1==c2)
        {
            return true;
        }


    
         return false;
        
    }
};