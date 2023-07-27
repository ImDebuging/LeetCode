class Solution {
private:
    TreeNode* Traversal(vector<int>& nums,int left,int right)
    {
        if(left>right){
            return NULL;
        }
        int middle=(left+right)/2;
        TreeNode* temp=new TreeNode(nums[middle]);
        temp->left=Traversal(nums,left,middle-1);
        temp->right=Traversal(nums,middle+1,right);
        return temp;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return Traversal(nums,0,nums.size()-1);
    }
};
