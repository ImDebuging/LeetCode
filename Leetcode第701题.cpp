class Solution {
private:
    void Traverse(TreeNode* &root, int val)
    {
        if(!root){
            return;
        }
        if(!root->left&&val<root->val){
            TreeNode *temp=new TreeNode(val);
            root->left=temp;
            return;
        }
        if(!root->right&&val>root->val){
            TreeNode *temp=new TreeNode(val);
            root->right=temp;
            return;
        }
        else{
            if(val<root->val){
                Traverse(root->left, val);
            }
            else{
                Traverse(root->right, val);
            }
        }
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode *temp=new TreeNode(val);
            return temp;
        }
        Traverse(root,val);
        return root;
    }
};
