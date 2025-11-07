// Last updated: 07/11/2025, 19:56:40
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int p=word.find(ch);
        int n=word.length();
        for(int i=p;i>p/2;i--)
        {
            swap(word[p-i],word[i]);
        }
        return word;
    }
};