class Solution {
public:
    bool isPalindrome(string s) {
        int i,f=0,n=s.size();

        for(i=n-1;i>=0;i--)if(!((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')))s.erase(s.begin()+i);

        std::ranges::transform(s,s.begin(),[](unsigned char c){
            return std::tolower(c);
        });
    
        n=s.size();
        for(i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i])return false;
        }
        return true;
    }
};
