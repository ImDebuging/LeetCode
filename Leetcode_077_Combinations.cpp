class Solution {
	vector<vector<int>> ans;
	vector<int> path;
	void BackTracking(int start_index, int size, int k, int n);
public:
	vector<vector<int>> combine(int n, int k) {
		BackTracking(1, 0, k, n);
		return ans;
	}
};

void Solution::BackTracking(int start_index, int size, int k, int n)
{
	if (size == k){
		ans.push_back(path);
		return;
	}
	for (int i = start_index; i <= n; ++i)
	{
		path.push_back(i);
		BackTracking(i + 1, size + 1, k, n);
		path.resize(size);
	}
}