class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int s=arr.size();
        vector<int> a;
        for(int i=0;i<s-1;i++){
            a.push_back(*max_element(arr.begin()+i+1,arr.begin()+s));
        }
        a.push_back(-1);
        return a;
    }
};