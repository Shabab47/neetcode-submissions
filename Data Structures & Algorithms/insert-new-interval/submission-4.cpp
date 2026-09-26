class Solution { 
public: 
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) { 
        int a=newInterval[0],b=newInterval[1]; 
        int A=-1,B=-1,n=intervals.size(); 
        if(n==0){
            intervals.push_back({a,b});
            return intervals;
        }
        for(int i=0;i<n;i++){ 
            int x=intervals[i][0]; 
            int y=intervals[i][1]; 
            if(b<x&&a<x&&i==0){ 
                intervals.insert(intervals.begin(),{a,b}); 
                return intervals; 
            } 
            if(a<=x&&A==-1){ 
                A=i; 
                intervals[i][0]=a; 
            } 
            if(a>=x&&a<=y&&A==-1){ 
                A=i; 
            } 
            if(b>=x&&b<=y&&B==-1&&A!=-1){ 
                B=i; 
                intervals[A][1]=y; 
            } 
            if(a<x&&b>x&&A!=-1&&i==0){ 
                A=i; 
                intervals[A][0]=a; 
            } 
            if(i<n-1&&b>y&&b<intervals[i+1][0]&&B==-1&&A!=-1){
                B=i;
                intervals[A][1]=b;
            }
            if(b>y&&B==-1&&A!=-1&&i==n-1){ 
                B=i; 
                intervals[A][1]=b; 
            } 
            if(b>y&&a>y&&i==n-1){ 
                intervals.push_back({a,b}); 
                return intervals; 
            } 
            if(i<n-1&&b>intervals[i][1]&&a>intervals[i][1]&&b<intervals[i+1][0]&&a<intervals[i+1][0]){ 
                intervals.insert(intervals.begin()+i+1,{a,b}); 
                return intervals; 
            } 
        } 
        if(A!=-1&&B!=-1){ 
            intervals[A][0]=intervals[A][0]; 
            intervals[A][1]=max(b, intervals[B][1]); 
            intervals.erase(intervals.begin()+1+A,intervals.begin()+1+B); 
            return intervals; 
        } 
        return intervals; 
    } 
};
