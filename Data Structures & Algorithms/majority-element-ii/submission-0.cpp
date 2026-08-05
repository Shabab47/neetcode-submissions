class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int k=nums.size()/3;
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
             m[nums[i]]++;
        }
        for(auto a:m){
            if(a.second>k)v.push_back(a.first);
        }
        return v;
    }
};