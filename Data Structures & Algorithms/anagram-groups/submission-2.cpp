class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        map<string,vector<string>> m;
        for(auto s:strs){
            string a=s;
            sort(a.begin(),a.end());
            m[a].push_back(s);
        }
        vector<vector<string>> A;
        for(auto t:m){
            A.push_back(t.second);
        }
        return A;
    }
};
