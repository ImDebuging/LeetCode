class Solution {
private:
int num=0;
    void Traverse(TreeNode* root,int &num)
    {
        if(!root){
            return;
        }
        Traverse(root->left,num);
        Traverse(root->right,num);
        num++;
    }
public:
    int countNodes(TreeNode* root) {
        Traverse(root,num);
        return num;
    }
};
