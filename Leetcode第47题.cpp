class Solution {
private:
    bool used[8];
    vector<int> path;
    vector<vector<int>> ans;
    void BackTracking(vector<int>& nums)
    {
        if(path.size()==nums.size()){
            ans.push_back(path);
            return;
        }
        for(int i=0;i<nums.size();++i)
        {
            if(i>0&&used[i-1]==false&&nums[i-1]==nums[i])continue;
            if(!used[i]){
                used[i]=true;
                path.push_back(nums[i]);
                BackTracking(nums);
                used[i]=false;
                path.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        BackTracking(nums);
        return ans;
    }
};
