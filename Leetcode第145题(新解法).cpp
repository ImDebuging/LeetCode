class Solution {
private:
    stack<TreeNode*>stk;
    vector<int>ans;
    void solve()
    {
        while(!stk.empty()&&stk.top()!=NULL)
        {
            TreeNode *temp=stk.top();
            ans.push_back(temp->val);
            stk.pop();
            if(temp->left!=NULL){
                stk.push(temp->left);
            }
            if(temp->right!=NULL){
                stk.push(temp->right);
            }            
        }
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stk.push(root);
        solve();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
