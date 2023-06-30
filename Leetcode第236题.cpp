class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return NULL;
        }
        if(root==p||root==q){
            return root;
        }
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);        
        if(left!=NULL&&right!=NULL){
            return root;
        }
        if(left==NULL&&right!=NULL){
            return right;
        }
        if(right==NULL&&left!=NULL){
            return left;
        }
        else{
            return NULL;
        }
    }
};
