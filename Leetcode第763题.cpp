class Solution {
public:
    vector<int> partitionLabels(string s) {
        if(s.size()==1){
            return {1};
        }
        vector<int> distance(s.size(),0);//初始化一个distance数组，每个元素代表当前字母在整个字符串中可能出现的最远位置,初始情况下所有元素均为0
        for(int i=0;i<s.size();++i)
        {
            int maxdis=i;
            for(int j=i;j<s.size();++j)
            {
                if(s[j]==s[i]){
                    maxdis=j;
                }
            }
            distance[i]=maxdis;
        }
        vector<int> ans;
        int start=0,end=0;
        for(int i=0;i<s.size();++i)
        {
            end=max(end,distance[i]);
            if(i==end){
                ans.push_back(end-start+1);
                start=i+1;
            }
        }
        return ans;
    }
};
