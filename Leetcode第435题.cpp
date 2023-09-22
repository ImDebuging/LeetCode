class Solution {
private:
    static bool cmp(vector<int> &a,vector<int> &b){
        return a[0]<b[0];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==1){
            return 0;
        }
        sort(intervals.begin(),intervals.end(),cmp);
        int ans=0,rightborder=intervals[0][1];
        for(int i=0;i<intervals.size()-1;++i)
        {
            if(intervals[i+1][0]<rightborder){//重叠的情况
                rightborder=min(intervals[i+1][1],rightborder);
                ans++;
            }
            else{//无重叠的情况
                rightborder=intervals[i+1][1];
            }
        }
        return ans;
    }
};
