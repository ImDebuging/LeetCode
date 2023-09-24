class Solution {
private:
    static bool cmp(vector<int> &a,vector<int> &b)
    {
        return a[0]<b[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> ans;
        int begin=intervals[0][0],end=intervals[0][1];
        for(int i=1;i<intervals.size();++i)
        {
            if(intervals[i][0]<=end){
                end=max(end,intervals[i][1]);
            }
            else{
                ans.push_back({begin,end});
                begin=intervals[i][0];
                end=intervals[i][1];
            }
        }
        if(intervals.back()[0]<=end){
            end=max(intervals.back()[1],end);
            ans.push_back({begin,end});
        }
        else{
            ans.push_back(intervals.back());
        }
        return ans;
    }
};
