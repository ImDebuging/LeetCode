class Solution {
private:
    vector<vector<int>> res;
    vector<int> path;
    int size,target;
    void BackTracking(vector<int>&candidates,int score,int start)
    {
        if(score>target){
            return;
        }
        if(score==target){
            res.push_back(path);
        }
        for(int i=start;i<size;++i)
        {
            path.push_back(candidates[i]);
            BackTracking(candidates,score+candidates[i],i);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        this->size=candidates.size();
        this->target=target;
        BackTracking(candidates,0,0);
        return res;
    }
};
