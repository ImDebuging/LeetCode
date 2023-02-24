class Solution {
public:
    deque<int> q;
    vector<int> ans;
    void mypop(int front_val)
    {
        if(!q.empty()&&front_val==q.front()){
            q.pop_front();
        }
    }
    void mypush(int val)
    {
        while(!q.empty()&&q.back()<val)
        {
            q.pop_back();
        }
        q.push_back(val);
    }
    int getmaxVal()
    {
        return q.front();
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       for(int i=0;i<k;++i)
       {
           mypush(nums[i]);
       }
       ans.push_back(getmaxVal());
       for(int i=k;i<nums.size();++i)
       {
           mypop(nums[i-k]);
           mypush(nums[i]);
           ans.push_back(getmaxVal());
       }
       return ans;
    }
};
