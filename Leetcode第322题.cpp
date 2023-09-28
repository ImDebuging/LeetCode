class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<dp.size();++i)
        {
            for(auto coin:coins)
            {
                if(i-coin>=0&&dp[i-coin]<dp[i]){
                    dp[i]=dp[i-coin];
                }
            }
            if(dp[i]!=INT_MAX){
                dp[i]++;
            }
        }
        return dp[amount]==INT_MAX?-1:dp[amount];
    }
};
