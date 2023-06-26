class Solution {
private:
    vector<int> result;
    int count=0,MaxCount=0;
    TreeNode* pre=NULL;
    void Traverse(TreeNode* cur)
    {
        if(!cur){
            return;
        }
        Traverse(cur->left);
        if(!pre){
            count=1;
        }
        else if(pre->val==cur->val){
            count++;
        }
        else{
            count=1;
        }
        pre=cur;
        if(count==MaxCount){
            result.push_back(cur->val);
        }
        if(count>MaxCount){
            result.clear();
            MaxCount=count;
            result.push_back(cur->val);
        }
        Traverse(cur->right);
    }
public:
    vector<int> findMode(TreeNode* root) {
        Traverse(root);
        return result;
    }
};
