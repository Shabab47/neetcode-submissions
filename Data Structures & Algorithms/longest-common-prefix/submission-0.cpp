class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int l=s.size();
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<l;j++){
                if(s[j]!=strs[i][j]){
                    l=j;
                    break;
                }
            }   
        }
        string S;
        for(int i=0;i<l;i++)S.push_back(s[i]);
        return S;
    }
};