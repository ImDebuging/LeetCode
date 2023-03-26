class Solution {
private:
    vector<int> path;
    vector<vector<int>> ans;
    int n,k;
    void BackTracking(int start_index=1,int size=0,int sum=0)
    {
        if(sum>n){
            return;
        }
        if(size==k){
            if(sum==n){
                ans.push_back(path);
            }
            return;
        }
        for(int i=start_index;i<=n-(k-size)+1&&i<=9;++i)
        {
            path.push_back(i);
            BackTracking(i+1,size+1,sum+i);
            path.pop_back();
        }
    }
public:
vector<vector<int>> combinationSum3(int k, int n)   
    {
        this->n=n;
        this->k=k;
        BackTracking();
        return ans;
    }
};
