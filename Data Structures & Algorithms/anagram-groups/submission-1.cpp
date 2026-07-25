class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> s(strs);
        
        vector<string> s1(strs);
        for(int i=0;i<s1.size();i++){
            sort(s1[i].begin(),s1[i].end());
        }
        for(int h=0;h<strs.size();h++){
            for(int i=h+1;i<strs.size();i++){
                if(s1[i]>s1[h]){
                    string c=s1[h];
                    s1[h]=s1[i];
                    s1[i]=c;

                    c=strs[i];
                    strs[i]=strs[h];
                    strs[h]=c;
                }
            }
        }
        int ind=1;
        vector<vector<string>> A;
        int temp=1;
        vector<int> z;
        if (strs.size() == 1) z.push_back(1);
        for(int i=1;i<s1.size();i++){
            if(s1[i]==s1[i-1]){
                temp++;
                if(i==s1.size()-1){
                z.push_back(temp);
                }
            }
            else{
                z.push_back(temp);
                temp=1;
                if(i==s1.size()-1) z.push_back(1);
            }
        }
    
        int start=0;

        for(int i=0;i<z.size();i++){
            vector<string> S(strs.begin()+start,strs.begin()+start+z[i]);
            start+=z[i];
            A.push_back(S);

        }
        return A;
    }
};
