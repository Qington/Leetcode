#include <iostream>
#include <vector>
using namespace std;
//MaxHeap.
void print(int a[], int n){  
    for(int j= 0; j<n; j++){  
        cout<<a[j] <<"  ";  
    }  
    cout<<endl;  
}  

void HeapDown(int a[], int s; int n) {
	int j=2*s+1;

	while(j<n) {
		if(j+1<n&&H[j]<H[j+1])
			j++;//max;
		if(H[s]<H[j]){
			swap(H[s],H[j]);
			s=j;
			j=2*s+1;
		}
		else{
			break;
		}

	}
	print(H,n); 
}

void BulidHeap(int H[], int n) {
	for(int i=(n-1)/2; i>=0; i--) {
		HeapDown(H,i,n);
	}
}
void HeapSort(int H[]; int i; int n) {
	for(int i=n-1; i>0; i--) {
		swap(H[i],H[0]);
		HeapDpwn(H,0,i);
	}
}

int main() {

	int H[10] = {3,1,5,7,2,4,9,6,10,8};  
    cout<<"初始值：";  
    print(H,10); 

	BulidHeap(H,10);

	HeapSort(H,0,10);
	print(H,10);
	return 0;
}
