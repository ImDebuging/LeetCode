class Solution {
private:
    vector<int> v;
    vector<int> temp;
    void Traverse(TreeNode* root)
    {
        if(!root){
            return;
        }
        Traverse(root->left);
        v.push_back(root->val);
        Traverse(root->right);        
    }
public:
    int getMinimumDifference(TreeNode* root) {
        Traverse(root);
        for(int i=0;i<v.size()-1;++i)
        {
            temp.push_back(v[i+1]-v[i]);
        }
        int min=temp[0];
        for(int i=0;i<temp.size();++i)
        {
            if(temp[i]<min){
                min=temp[i];
            }
        }
        return min;
    }
};
