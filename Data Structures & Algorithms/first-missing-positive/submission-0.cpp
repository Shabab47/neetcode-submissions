class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        int f=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)s.insert(nums[i]);
        }
        vector<int> v(s.begin(),s.end());
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i+1!=v[i]){
                f=i+1;
                break;
            }
            else f=i+1;
        }
        if(f==v.size()&&v.back()==f&&f!=0)return f+1;
        if(f>0)return f;
        else return 1;
    }
};