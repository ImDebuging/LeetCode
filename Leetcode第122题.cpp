class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        bool isIncreasing=true;
        for(int i=0;i<prices.size()-1;++i){
            if(prices[i+1]<prices[i]){
                isIncreasing=false;
                break;
            }
        }
        if(isIncreasing==true){
                return prices[prices.size()-1]-prices[0];
        }
        int res=0,temp=0;
        int cost=prices[0],profit=prices[0];
        for(int i=0;i<prices.size();++i){
            profit=prices[i];
            if(profit-cost<0){
                cost=profit;
            }
            if(profit-cost<temp){
                res+=temp;
                temp=0;
                cost=profit;
            }
            if(i==prices.size()-1&&profit-cost>=temp){
                res+=profit-cost;
            }
            temp=profit-cost;
        }
        return res;
    }
};
