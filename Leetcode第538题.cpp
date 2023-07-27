class Solution {
private:
    int pre=0;
public:
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        root->right=convertBST(root->right);
        root->val+=pre;
        pre=root->val;
        root->left=convertBST(root->left);
        return root;
    }
};
