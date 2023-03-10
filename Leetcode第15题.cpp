class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;++i){
            if(nums[i]>0){
                return ans;
            }
            if(i>0&&nums[i]==nums[i-1]){continue;}
            int left=i+1;
            int right=size-1;
            while(left<right){
                if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0){
                left++;
                }
                else{
                    ans.push_back(vector<int>{nums[i],nums[left],nums[right]});
                    while(left<right&&nums[right]==nums[right-1]){right--;}
                    while(left<right&&nums[left]==nums[left+1]){left++;}
                    left++;
                    right--;
                }
            }
        }
        return ans;
    }
};
