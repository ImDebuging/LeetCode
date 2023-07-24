class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==NULL){
            return NULL;
        }
        if(root->val<low){
            TreeNode *temp=trimBST(root->right,low,high);
            return temp;
        }
        else if(root->val>high){
            TreeNode *temp=trimBST(root->left,low,high);
            return temp;
        }
        if(root->left!=NULL){
            root->left=trimBST(root->left,low,high);
        }
        if(root->right!=NULL){
            root->right=trimBST(root->right,low,high);
        }
        return root;
    }
};
