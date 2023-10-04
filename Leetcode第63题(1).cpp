class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1){
            return 0;
        }
        vector<vector<int>> map(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),1));
        for(int i=1;i<obstacleGrid.size();++i)
        {
            if(obstacleGrid[i][0]!=1){
                map[i][0]=map[i-1][0];
            }
            else{
                map[i][0]=0;
            }
        }
        for(int i=1;i<obstacleGrid[0].size();++i)
        {
            if(obstacleGrid[0][i]!=1){
                map[0][i]=map[0][i-1];
            }
            else{
                map[0][i]=0;
            }
        }
        for(int i=1;i<obstacleGrid.size();++i)
        {
            for(int j=1;j<obstacleGrid[0].size();++j)
            {
                if(obstacleGrid[i][j]!=1){
                    map[i][j]=map[i-1][j]+map[i][j-1];
                }
                else{
                    map[i][j]=0;
                }
            }
        }
        return map[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};
