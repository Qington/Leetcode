#include <iostream>
#include <vector>
using namespace std;

void print(int a[], int n){  
    for(int j= 0; j<n; j++){  
        cout<<a[j] <<"  ";  
    }  
    cout<<endl;  
}  

void QuickSort(int H[], int l, int r) {

	while(l<r){
		int p=(l+r)/2;
		swap(H[p],H[l]);
		int PK=H[l];
		int i=l,j=r;
		while(l<r){
			while(l<r&&H[r]>=PK) r--;
			swap(H[l],H[r]);
			while(l<r&&H[l]<=PK) l++;
			swap(H[l],H[r]);
		}
		p=l;
		QuickSort(H,i,p-1);
		Quicksort(H,p+1,j);
	}
	
}
int main() {
	int H[10] = {3,1,5,7,2,4,9,6,10,8};  
    cout<<"初始值：";  
    print(H,10); 

    QuickSort(H,0,9);
    print(H,10); 
	return 0;
}
