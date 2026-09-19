class Solution {
public:
    int trap(vector<int>& height) {
        int i,s=height.size(),lh=0,kb=0,d=0,sum=0;
        for(i=0;i<s;i++){
            if(height[i]>0&&lh==0){
                lh=height[i];
                continue;
            }
            if(height[i]>=0&&lh!=0){
                if (height[i] >= lh && d == 0) {
                    lh = height[i];
                    continue;
                }
                if(height[i]==lh&&d==0)continue;
                else if(height[i]>=lh&&d>0){
                    sum+=(lh*d)-kb;
                    kb=0;
                    lh=0;
                    d=0;
                    i--;
                    continue;
                }
            }
            if(height[i]>=0&&height[i]<lh){
                kb+=height[i];
                d++;
            }
        
        }
        if(d>0){
            int rm=0;
            for(int j=s-1;j>=s-d;j--){
                if(height[j]>rm){
                    rm=height[j];
                } 
                else{
                    sum+=rm-height[j];
                }
            }
        }
        return sum;
    }
};
