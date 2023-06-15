class Solution {
private:
    vector<int> v;
    void inTraverse(TreeNode* root)
    {
        if(!root){
            return;
        }
        inTraverse(root->left);
        v.push_back(root->val);
        inTraverse(root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root){
            return true;
        }
        inTraverse(root);
        for(int i=1;i<v.size();++i)
        {
            if(v[i]<=v[i-1]){
                return false;
            }
        }
        return true;
    }
};
