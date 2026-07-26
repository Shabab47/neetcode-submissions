class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0,tw=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5)f++;
            else if(bills[i]==10){
                if(f>0){
                    f--;t++;
                }
                else return 0;
            }
            else if(bills[i]==20){
                if(f>0&&t>0){
                    f--;t--;
                    tw++;
                }
                else if(f>2){
                    f-=3;tw++;
                }
                else return 0;
            }
        }
        return 1;
    }
};