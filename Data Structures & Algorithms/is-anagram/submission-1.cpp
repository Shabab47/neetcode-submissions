class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int f=1;
        for(int i=0;i<max(s.size(),t.size());i++)if(s[i]!=t[i])f=0;
        return f;
    }
};
