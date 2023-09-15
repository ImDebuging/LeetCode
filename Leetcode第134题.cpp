class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int Gas=0,Cost=0;//初始化油量和消耗
        for(int i=0;i<gas.size();++i)
        {
            Gas+=gas[i];
            Cost+=cost[i];
        }
        if(Gas<Cost){
            return -1;    //如果总油量小于总消耗，则汽车一定到不了终点
        }
        vector<int> netcost;
        for(int i=0;i<gas.size();++i)
        {
            netcost.push_back(gas[i]-cost[i]);
        }
        int ans=0,sum=0;
        for(int i=0;i<netcost.size();++i)
        {
            sum+=netcost[i];
            if(     sum<0&&(i+1)<gas.size()     ){    //如果剩余油量在某个点处跌到0以下，则这个点前面所有的加油站点都不可能是初始点
                                                      //因为剩余油量必然是正数，汽车才能往前走
                ans=i+1;    //不从跌到负数这个点开始是因为从这个点开始的剩余油量必然为负
                sum=0;
            }
        }
        return ans;
    }
};
