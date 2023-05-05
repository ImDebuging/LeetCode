class Solution {
    bool used[6];
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
    vector<vector<int>> permute(vector<int>& nums) {
        BackTracking(nums);
        return ans;
    }
};
