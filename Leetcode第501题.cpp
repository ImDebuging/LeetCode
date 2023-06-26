class Solution {
private:
    map<int,int> m;
    void Traverse(TreeNode* root)
    {
        if(!root){
            return;
        }
        Traverse(root->left);
        m[root->val]+=1;
        Traverse(root->right);
    }
public:
    vector<int> findMode(TreeNode* root) {
        Traverse(root);
        int temp=m.begin()->second;
        vector<int> ans;
        for(map<int,int>::iterator it=m.begin();
        it!=m.end();it++)
        {
            if(it->second>temp){
                temp=it->second;
            }
        }
        for(map<int,int>::iterator it=m.begin();
        it!=m.end();it++)
        {
            if(it->second==temp){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};
