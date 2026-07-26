class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        int k=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin() + i);i--;k--;continue;
            }
        }
        return k;
    }
};