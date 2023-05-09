class Solution {
    bool IsValid(vector<vector<char>>& board,int row,int col,char num)
    {
        for(int i=0;i<9;++i)
        {
            if(board[i][col]==num){
                return false;
            }
        }
        for(int i=0;i<9;++i)
        {
            if(board[row][i]==num){
                return false;
            }
        }
        int start_x=(row/3)*3,start_y=(col/3)*3;
        for(int i=0;i<3;++i)
        {
            for(int j=0;j<3;++j)
            {
                if(board[start_x+i][start_y+j]==num)
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool BackTracking(vector<vector<char>>& board)
    {
        for(int i=0;i<9;++i)
        {
            for(int j=0;j<9;++j)
            {
                if(board[i][j]=='.'){
                    for(char k='1';k<='9';++k)
                    {
                        if(IsValid(board,i,j,k)){
                            board[i][j]=k;
                            if(BackTracking(board)){
                                return true;
                            }
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        BackTracking(board);
    }
};
