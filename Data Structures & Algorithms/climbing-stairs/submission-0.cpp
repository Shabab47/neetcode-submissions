class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=1,temp;
        for(int i=n-2;i>=0;i--){
            temp=a+b;
            b=a;
            a=temp;
        }
        if(n==2)return 2;
        if(n==1)return 1;
        return a;
    }
    
};
