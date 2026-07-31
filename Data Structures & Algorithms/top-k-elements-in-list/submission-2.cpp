class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int num:nums){
            m[num]++;
        }
        vector<pair<int,int>>freq_pairs;
        for(auto [element,frequency]:m){
            freq_pairs.push_back({frequency,element});
        }
        sort(freq_pairs.rbegin(),freq_pairs.rend());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(freq_pairs[i].second);
        }
        return result;
    }
};
