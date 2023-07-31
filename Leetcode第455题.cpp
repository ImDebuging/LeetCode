class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0,sum=0;
        while(i<g.size()&&j<s.size())
        {
            while(i<g.size()&&j<s.size()&&(s[j]>g[i]||s[j]==g[i]))
            {
                j++;
                i++;
                sum++;
            }
            j++;
        }
        return sum;
    }
};
