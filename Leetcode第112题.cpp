class Solution {
    bool flag;
    void traverse(TreeNode* root, int sum,int targetSum)
    {
        if(!root){
            return;
        }
        if(root->left==NULL&&root->right==NULL){
            if(sum+root->val==targetSum){
                flag=true;
            }
            return;
        }
        if(flag){
            return;
        }
        traverse(root->left,sum+root->val,targetSum);
        traverse(root->right,sum+root->val,targetSum);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        traverse(root,0,targetSum);
        return flag;
    }
};
