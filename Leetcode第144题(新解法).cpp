class Solution {
private:
    stack<TreeNode*>stk;
    vector<int>ans;
    void solve()
    {
        while(!stk.empty()&&stk.top()!=NULL)
        {
            TreeNode *temp=stk.top();
            ans.push_back(stk.top()->val);
            stk.pop();
            if(temp->right!=NULL){
                stk.push(temp->right);
            }
            if(temp->left!=NULL){
                stk.push(temp->left);
            }
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stk.push(root);
        solve();
        return ans;
    }
};
