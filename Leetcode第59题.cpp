class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int loop=n/2;
        int offset=1;
        int startx=0;
        int starty=0;
        int temp=1;
        int i,j;
        vector<vector<int>> ans(n,vector(n,0));
        while(loop--)
        {
            i=starty;
            j=startx;
            for(j=startx;j<n-offset;++j){
                ans[i][j]=temp++;
            }
            for(i=starty;i<n-offset;++i){
                ans[i][j]=temp++;
            }
            for(;j>offset-1;--j){
                ans[i][j]=temp++;
            }
            for(;i>offset-1;--i){
                ans[i][j]=temp++;
            }
            offset++;
            startx++;
            starty++;
        }
        if(n%2){
            ans[n/2][n/2]=temp;
        }
        return ans;
    }
};
