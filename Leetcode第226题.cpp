class Solution {
private:
    void solve(TreeNode* &root)
    {
        if(!root){
            return;
        }
        solve(root->left);
        solve(root->right);
        TreeNode *temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        solve(root);
        return root;
    }
};
