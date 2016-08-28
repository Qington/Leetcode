Problem Description:
计算给定字符串中的最长对称子串长度，例如“iqiyi”中的最长对称子串为“i”，“iqiyiyiq”的最长对称子串为“qiyi”和“iyiq”，长度为4。给定字符串为纯小写字母的组合。

#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string s;
 	while(cin>>s){
    	int l=s.length();
          for(int i=l-1;i>0;i--){
          	vector<string> temp(l+1-i);
            for(int j=0;j<l+1-i;j++){
            	string sub(s,j,i-1);
                temp.push_back(sub);
            }
            for(int j=0;j<l-i;j++){
                  reverse(temp[j].begin(),temp[j].end());
                  for(int j1=j+1;j1<l+1-i;j1++){
                       if(temp[j]==temp[j1])
                             return i;
                  }
            }
               // return i;
          }
    }
     return 0;     
}
