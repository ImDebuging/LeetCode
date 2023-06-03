class Solution {
private:
    int cmp=0;
    int ans=0;
    void traversal(TreeNode* root,int depth=0)
    {
        if(!root){
            return;
        }
        if(root->left==NULL&&root->right==NULL){
            if(cmp<depth){
                cmp=depth;
                ans=root->val;
            }            
        }
        traversal(root->left,depth+1);
        traversal(root->right,depth+1);
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        if(root->left==NULL&&root->right==NULL){
            return root->val;
        }
        traversal(root);
        return ans;
    }
};
