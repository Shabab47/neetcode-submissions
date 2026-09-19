class Solution {
public:
    int climbStairs(int n) {
        int a=2,b=1,temp;
        if(n==2)return 2;
        if(n==1)return 1;
        n-=2;
        while(n--){
            temp=a+b;
            b=a;
            a=temp;
        }
        return a;
    }
    
};
