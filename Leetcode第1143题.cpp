class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1,0));
        //dp数组中，dp[i][j]表示到text1[i]和text2[j]之前最长的公共子数组的长度
        int result=0;
        for(int i=1;i<dp.size();++i)
        {
            for(int j=1;j<dp[0].size();++j)
            {
                if(text1[i-1]==text2[j-1]){
                    //如果当前的字符相同，那么当前最长的长度就等于上一个最大长度+1
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    //如果当前字符不相同，那么当前最长的长度就等于上一个最长长度
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                if(dp[i][j]>result){
                    result=dp[i][j];
                }
            }
        }
        return result;
    }
};
