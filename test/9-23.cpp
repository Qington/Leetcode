#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<limits.h>
#include<algorithm>
#include <sstream>  
#include<unordered_map>
#include<numeric>
using namespace std;
void dfs(vector<vector<int>> &result, vector<int> &nums,
	vector<int> &path, int pos,int M) {
	int aa = accumulate(path.begin(), path.end(), 0);
	if ( aa== M) {
		result.push_back(path);
	}

	for (int i = pos; i<nums.size(); i++) {
		/*
		if (i != pos&&nums[i] == nums[i - 1]) {
			continue;
		}
		*/
		path.push_back(nums[i]);
		dfs(result, nums, path, i + 1,M);
		path.pop_back();

	}
}
int main() {
	int n, sum;
	cin >> n >> sum;
	vector<int > nums;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		nums.push_back(temp);
	}
	sort(nums.begin(), nums.end());
	vector<int> path;
	vector<vector<int>> ans;

	dfs(ans, nums, path, 0,sum);
	
	cout << ans.size() << endl;
	system("pause");
	return 0;
}
