class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i,j,key,s=nums.size();
        for(i=0;i<s;i++){
             key=nums[i];
            for(j=i+1;j<s&&j<=i+k;j++){
                if(nums[i]==nums[j]&&abs(i-j)<=k)return true;
            }
        }
        return false;
    }
};