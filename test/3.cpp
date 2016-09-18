#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
#include<algorithm>
#include <sstream>  
using namespace std;

int main() {
	string temp;
	cin >> temp;
	//cout << temp <<endl;
	int pos = temp.find(',');
	while (pos != string::npos)
	{
		temp = temp.replace(pos, 1, 1, ' ');  //½«×Ö·û´®ÖÐµÄ','ÓÃ¿Õ¸ñ´úÌæ  
		pos = temp.find(',');
	}
	stringstream sStream;
	sStream << temp;  //½«×Ö·û´®µ¼ÈëµÄÁ÷ÖÐ  



	int l = 0;
	l = temp.size();
	vector<int > nums;
	int a;
	while (sStream)
	{
		sStream >> a;
		nums.push_back(a);
	} 
	int s = nums.size();

	int Min = INT_MAX, result = 0;
	for (int i = 0; i<s; i++) {
		Min = min(Min, nums[i]);
		result = max(result, nums[i] - Min);
	}
	cout << result << endl;
	getchar();
	return 0;
}
