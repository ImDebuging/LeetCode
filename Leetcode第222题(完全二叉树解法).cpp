class Solution {
private:
    int Traverse(TreeNode* root)
    {
        if(!root){
            return 0;
        }
        TreeNode* left=root->left;
        TreeNode* right=root->right;
        int left_deepth=0,right_deepth=0;
        while(left!=NULL)
        {
            left=left->left;
            left_deepth++;
        }
        while(right!=NULL)
        {
            right=right->right;
            right_deepth++;
        }
        if(left_deepth==right_deepth){
            return (2<<left_deepth)-1;
        }
        int left_num=0;
        int right_num=0;
        left_num=Traverse(root->left);
        right_num=Traverse(root->right);
        int result=left_num+right_num;
        return result+1;
    }
public:
    int countNodes(TreeNode* root) {
        return Traverse(root);
    }
};
