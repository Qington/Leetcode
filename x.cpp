#include<iostream>
#include<vector>
#include<string>
#include <sstream> 
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
      string temp;
      cin >> temp;
      //cout << temp <<endl;
	 int pos = temp.find(',');  
    while (pos != string::npos)  
    {  
        temp = temp.replace(pos, 1, 1, ' ');  //将字符串中的','用空格代替  
        pos = temp.find(',');  
    }  
  stringstream sStream;  
  sStream << temp;  //将字符串导入的流中  

   
  
	  int l=0;
	  l=temp.size();
	  vector<int > nums;
	  int a;
	   while (sStream)  
    {  
        sStream >> a;  
		nums.push_back(a);
    }  /*
	  int j=0;
	  for(int i=0; i<l;i++){
		  if(temp[i]!=','){
			nums.push_back(temp[i]-'0');
		  }
	  }
	  */
	  int s=nums.size();
	
	   int Min=INT_MAX, result=0;
        for(int i=0; i<s; i++) {
            Min=min(Min,nums[i]);
            result=max(result,nums[i]-Min);
        }
        cout << result << endl;
	  getchar();
      return 0;
}
