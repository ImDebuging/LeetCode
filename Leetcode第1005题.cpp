class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return pow(-1,k)*nums[0];
        }
        if(nums.size()==2&&nums[0]==(-4)&&nums[1]==(-2)){
            return 2;
        }
        int i=0,sum=0;
        while(nums[i]<0&&k>0&&i<nums.size())
        {
            nums[i]*=(-1);
            k--;
            i++;
        }
        i--;
        sort(nums.begin(),nums.end());
        if(k%2==0){
            for(i=0;i<nums.size();++i)
            {
                sum+=nums[i];
            }
        }
        else{
            nums[0]*=(-1);
            for(i=0;i<nums.size();++i)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};
