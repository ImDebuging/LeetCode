class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root){
            return 0;
        }
        if(root->left==NULL&&root->right==NULL){
            return 0;
        }
        int lv=sumOfLeftLeaves(root->left);
        if(root->left!=NULL&&root->left->left==NULL&&root->left->right==NULL){
            lv+=root->left->val;
        }
        int rv=sumOfLeftLeaves(root->right);
        return lv+rv;
    }
};
