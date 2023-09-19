class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills.size()==1){
            return true;
        }//就一个顾客，肯定找得开
        int charge[3]={0,0,0};
        bool res=true;
        for(int i=0;i<bills.size();++i)
        {
            switch(bills[i]){
                case 5:
                    charge[0]++;
                    break;
                case 10:
                    charge[1]++;
                    break;
                default:
                    charge[2]++;
            }//先收一张零钱
            if(bills[i]==5){
                continue;
            }
            else if(bills[i]==10){
                if(charge[0]==0){
                    res=false;
                    break;
                }
                else{
                    charge[0]--;
                }
            }
            else{
                if(charge[1]>0&&charge[0]>0){
                    charge[1]--;
                    charge[0]--;
                }
                else if(charge[0]>=3){
                    charge[0]-=3;
                }
                else{
                    res=false;
                    break;
                }
            }
        }
        return res;
    }
};
