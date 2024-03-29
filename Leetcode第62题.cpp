class Solution {
private:
    long long ways[105][105];
    void SetArr(int m,int n);
public:
    int uniquePaths(int m, int n) {
        SetArr(m,n);
        return ways[m-1][n-1];
    }
};

void Solution::SetArr(int m,int n)
{
    for(int i=0;i<m;++i)
    {
        ways[i][0]=1;
    }
    for(int j=0;j<n;++j)
    {
        ways[0][j]=1;
    }
    for(int i=1;i<m;++i)
    {
        for(int j=1;j<n;++j)
        {
            ways[i][j]=ways[i-1][j]+ways[i][j-1];
        }
    }
}
