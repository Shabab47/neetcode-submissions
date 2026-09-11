class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int i=0,j=0;
        int n=max(word1.size(),word2.size());
        while(i<word1.size()&&j<word2.size()){
            s+=word1[i++];
            s+=word2[j++];
        }
        while(i<word1.size())s+=word1[i++];
        while(i<word2.size())s+=word2[i++];
        return s;
    }
};