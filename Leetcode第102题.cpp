class Solution {
private:
    queue<TreeNode*> que;
    vector<int> path;
    vector<vector<int>> ans;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        que.push(root);
        while(!que.empty()&&que.front()!=NULL)
        {
            int size=que.size();
            for(int i=0;i<size;++i)
            {
                if(que.front()->left!=NULL){
                    que.push(que.front()->left);
                }
                if(que.front()->right!=NULL){
                    que.push(que.front()->right);
                }
                path.push_back(que.front()->val);
                que.pop();                
            }
            ans.push_back(path);
            path.clear();
        }
        return ans;
    }
};
