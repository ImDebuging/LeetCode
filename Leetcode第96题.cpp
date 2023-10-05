class Solution {
public:
    int numTrees(int n) {
        vector<int> dp_TreeNums(n+1,0);//dp数组中，dp[i]代表一个数量为i的有序数组一共可以构建dp[i]个二叉搜索树
        for(int i=1;i<=n;++i)
        {
            int nodeNum=0;
            for(int j=1;j<=i;++j)   //遍历根节点的取值情况
            {
                int leftNum=0,rightNum=0;
                leftNum=dp_TreeNums[j-1]==0?1:dp_TreeNums[j-1];
                rightNum=dp_TreeNums[i-j]==0?1:dp_TreeNums[i-j];
                nodeNum+=leftNum*rightNum;
                //左子树中的节点一定比根节点小，根节点为j，比它小的节点就有j-1个，因此左子树的组成一共有dp[j-1]种情况
                //右子树中的节点一定比根节点大，根节点为j，比它小的节点就有i-j个，因此左子树的组成一共有dp[i-j]种情况
                //综上，根节点为j时，可能构成的二叉搜索树的总数为左右子树可能情况的乘积，即leftNum*rightNum。
            }
            dp_TreeNums[i]=nodeNum;
        }
        return dp_TreeNums[n];
    }
};
