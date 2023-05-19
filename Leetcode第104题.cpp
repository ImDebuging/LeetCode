class Solution {
private:
    int Traverse(TreeNode* root,int deepth=0)
    {
        if(root==NULL){
            return deepth;
        }
        int left=Traverse(root->left,deepth+1);
        int right=Traverse(root->right,deepth+1);
        return left>right?left:right;
    }
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        return Traverse(root);
    }
};
