class Solution {
private:
    int findMaxindex(int begin,int end,vector<int>& nums)
    {
        int maxIndex=begin;
        for(int i=begin;i<=end;++i)
        {
            if(nums[i]>nums[maxIndex]){
                maxIndex=i;
            }
        }
        return maxIndex;
    }
    TreeNode* construct(int begin,int end,vector<int>& nums)
    {
        TreeNode *root=new TreeNode;
        if(begin==end){
            root->val=nums[begin];
            root->left=NULL;
            root->right=NULL;
            return root;
        }
        if(begin>end){
            return NULL;
        }
        int maxIndex=findMaxindex(begin,end,nums);
        root->val=nums[maxIndex];
        root->left=construct(begin,maxIndex-1,nums);
        root->right=construct(maxIndex+1,end,nums);
        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(0,nums.size()-1,nums);
    }
};
