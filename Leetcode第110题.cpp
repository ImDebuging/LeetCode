class Solution {
private:
	int getDepth(TreeNode* root, int depth = 0)
	{
		if (!root){
			return depth;
		}
		int leftdep = getDepth(root->left, depth + 1);
		int rightdep = getDepth(root->right, depth + 1);
		return leftdep>rightdep ? leftdep : rightdep;
	}
public:
	bool isBalanced(TreeNode* root) {
		if (!root){
			return true;
		}
		int leftdep = getDepth(root->left);
		int rightdep = getDepth(root->right);
		if (abs(leftdep-rightdep)<=1){
			return isBalanced(root->left) && isBalanced(root->right);
		}
		else{
			return false;
		}
	}
};
