class Solution {
private:
    int result=INT_MAX;
    TreeNode *pre=NULL;
    void Traverse(TreeNode *cur)
    {
        if(!cur){
            return;
        }
        Traverse(cur->left);
        if(pre){
            result=result<cur->val-pre->val?result:cur->val-pre->val;
        }
        pre=cur;
        Traverse(cur->right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        Traverse(root);
        return result;
    }
};
