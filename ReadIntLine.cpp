#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cstring>
#include <limits.h>
#include <algorithm>
#include <sstream>  
#include <unordered_map>
#include <numeric>
#include <iomanip>
#include <string.h>
using namespace std;

int main() {
	string temp;
	vector<vector<int>> nums;

	while (getline(cin, temp)) {
		cout << temp << endl;
		int l = temp.size();
		vector<int> line;
		istringstream iss(temp);
		int num;
		while (iss >> num) {
			line.push_back(num);
		}

		
		int kk1 = line.size();
		for (int kk = 0; kk < kk1; kk++) {
			cout << line[kk] <<" ";
		}
		cout << endl;
		nums.push_back(line);
		line.erase(line.begin(),line.end());
	}
	int ans = 0;
	int left=0, right=0;
	int l1 = nums.size();
	for (int j = 0; j < l1;j++) {
		vector<int> ll = nums[j];
		if (ll[0] == 1) {
			left = ll[1] <= right ? right+1 : ll[1];
			right = ll[2] <= right ? right+1 : ll[2];
			int value = ll[3];
			for (int k = left; k <= right; k++) {
				ans += value;
			}
		}
		if (ll[0] == 2) {
			ans += ll[2];
		}	
	}
	cout << "ans"<<ans << endl;


	system("pause");
	return 0;
}
