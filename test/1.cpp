输入
第一行数据是两个正整数，分别表示包裹的重量上限m和物品的总数n
第二行数据是n个正整数，表示第一件，第二件...第n件物品的重量
第三行数据是n个正整数，表示第一件，第二件...第n件物品的价值
输出
为1个实数，保留小数点后一位，表示小Q在这个包裹上能赚到的利润。
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int m,n;
    cin>>m>>n;
    int M[n],V[n];
    vector<double> b(n);
    for(int i=0;i<n;i++){
    	cin>>M[i];
    }
    for(int i=0;i<n;i++){
    	cin>>V[i];
        b[i]=V[i]/M[i];
    }
    for(int i=0;i<n;i++){
     	for(int j=i+1;j<n;j++)
        {
              if(b[i]<b[j]){
              	swap(b[i],b[j]);
                swap(M[i],M[j]);
                swap(V[i],V[j]);
              }
        }
    }
    //sort(b.begin(),b.end());
    double Max=0;
      int m1=0;
      int i=0;
      while(m1<=m){
            m1+=M[i];
            Max+=0.1*V[i];
            i++;
      }
      
      
      
      cout << Max << endl;
     return 0;

}
