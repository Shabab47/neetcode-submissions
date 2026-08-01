class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int s=nums.size();
        vector<int> v(s,-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<=s){
                v[nums[i]-1]=nums[i];
            }
        }
        for(int i=0;i<s;i++){
            if(v[i]==-1){
                return i+1;
            }
        }
        return s+1;
    }
};