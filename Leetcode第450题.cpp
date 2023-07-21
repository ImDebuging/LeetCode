class Solution {
private:
    void Traverse(TreeNode* root, int key)
    {
        if(!root){
            return;
        }
        if(root->left){
            if(root->left->val==key){
                TransformBST(root,true);
            }
        }
        if(root->right){
            if(root->right->val==key){
                TransformBST(root,false);
            }
        }
        Traverse(root->left,key);
        Traverse(root->right,key);
    }
    void TransformBST(TreeNode* root,bool isLeft)
    {
        if(isLeft){
            if(!root->left->left){
                root->left=root->left->right;
            }
            else if(!root->left->right){
                root->left=root->left->left;
            }
            else{
                TreeNode*temp=root->left->right;
                while(temp->left)
                {
                    temp=temp->left;
                }
                temp->left=root->left->left;
                root->left=root->left->right;
            }
        }
        else{
            if(!root->right->left){
                root->right=root->right->right;
            }
            else if(!root->right->right){
                root->right=root->right->left;
            }
            else{
                TreeNode*temp=root->right->right;
                while(temp->left)
                {
                    temp=temp->left;
                }
                temp->left=root->right->left;
                root->right=root->right->right;
            }
        }
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(root->val==key){
            if(root->left==NULL){
                return root->right;
            }
            if(root->right==NULL){
                return root->left;
            }
            else{
                TreeNode* temp=root->right;
                while(temp->left!=NULL)
                {
                    temp=temp->left;
                }
                temp->left=root->left;
                return root->right;
            }
        }
        Traverse(root,key);
        return root;
    }
};
