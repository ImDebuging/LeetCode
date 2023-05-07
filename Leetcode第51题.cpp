class Solution {
private:
    vector<string>path;
    vector<vector<string>> ans;
    string template_row;
    bool Column_used[9];
    bool Hypo_used[18];
    bool Hypo_right_used[18];
    int ROW;
    void BackTracking(int row=0)
    {
        if(row==ROW){
            ans.push_back(path);
            return;
        }
        string row_string=template_row;
        for(int i=0;i<ROW;++i)
        {
            if(!Column_used[i]&&!Hypo_used[ROW+row-i]
            &&!Hypo_right_used[row+i]){
                row_string[i]='Q';
                Column_used[i]=true;
                Hypo_used[ROW+row-i]=true;
                Hypo_right_used[row+i]=true;
                path.push_back(row_string);
                BackTracking(row+1);
                row_string[i]='.';
                Column_used[i]=false;
                Hypo_used[ROW+row-i]=false;
                Hypo_right_used[row+i]=false;
                path.pop_back();
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        template_row=string(n,'.');
        ROW=n;
        BackTracking();
        return ans;
    }
};
