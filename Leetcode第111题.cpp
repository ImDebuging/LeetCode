class Solution {
private:
    int Traverse(TreeNode* root,int deepth=0)
    {
        if(!root){
            return deepth;
        }
        if(root->left==NULL&&root->right!=NULL){
            return Traverse(root->right,deepth+1);
        }    
        else if(root->left!=NULL&&root->right==NULL){
            return Traverse(root->left,deepth+1);
        }    
        int left=Traverse(root->left,deepth+1);
        int right=Traverse(root->right,deepth+1);
        return left<right?left:right;
    }
public:
    int minDepth(TreeNode* root) {
        return Traverse(root);
    }
};
