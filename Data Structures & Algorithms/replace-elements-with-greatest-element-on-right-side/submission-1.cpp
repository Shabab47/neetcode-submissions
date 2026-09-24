class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int s=arr.size();
        int temp=arr[s-1],c=0;
        for(int i=s-2;i>=0;i--){
            if(arr[i]>=temp){
                c=arr[i];
                arr[i]=temp;
                temp=c;
            }
            else arr[i]=temp;
        }
        arr[s-1]=-1;
        return arr;
    }
};