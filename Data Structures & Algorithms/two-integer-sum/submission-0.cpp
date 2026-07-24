class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp;
        for(int i=0;i<nums.size();i++){
            temp=target-nums[i];
            auto j=find(nums.begin(),nums.end(),temp);
            if(j-nums.begin()!=i&&j!=nums.end()){
                vector <int> v;
                int J=j-nums.begin();
                v.push_back(min(i,J));
                v.push_back(max(i,J));
                return v;
            }
        }
    }
};
