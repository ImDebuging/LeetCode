class Solution {
public:
    int fib(int N) {
        if (N <= 1) return N;
        int dp[2];
        dp[0] = 1;
        dp[1] = 1;
        for (int i=0;i<N-2;++i) {
            int sum=dp[0]+dp[1];
            dp[0]=dp[1];
            dp[1]=sum;
        }
        return dp[1];
    }
};
