class Solution {
private:
    string path;
    vector<string> ans;
    int n=0;
    void Push(int n)
    {
        stack<char>stk;
        if(n<0){
            path.push_back('-');
            n=-1*n;
        }
        while(n)
        {
            int temp=n%10;
            stk.push(temp+'0');
            n/=10;
        }
        while(!stk.empty())
        {
            path.push_back(stk.top());
            stk.pop();
        }
    }
    void BackTracking(TreeNode* root)
    {        
        if(n++){
            path.push_back('-');
            path.push_back('>');
        } 
        Push(root->val);      
        if(root->left==NULL&&root->right==NULL){
            if(*(path.end()-1)=='>'){
                path.pop_back();
                path.pop_back();
            }            
            ans.push_back(path);
            return;
        }        
        if(root->left){
            BackTracking(root->left);
            while(*(path.end()-1)!='>')
            {
                path.pop_back();
            }
            path.pop_back();
            path.pop_back();
        }
        if(root->right){
            BackTracking(root->right);
            while(*(path.end()-1)!='>')
            {
                path.pop_back();
            }
            path.pop_back();
            path.pop_back();
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        BackTracking(root);
        return ans;
    }
};
