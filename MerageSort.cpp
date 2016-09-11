#include <iostream>
using namespace std;

void print(int a[], int n){  
    for(int j= 0; j<n; j++){  
        cout<<a[j] <<"  ";  
    }  
    cout<<endl;  
}  

void merage(int a[], int l, int m, int r, int c[]) {
	int i=l,j=m+1,k=0;
	while(i<=m&&j<=r) {
		if(a[i]<b[j]) {
			c[k]=a[i];
			i++;
			k++;
		}else{
			c[k]=a[j];
			j++;
			k++
		}
	}
	while(i<=m) {
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=r) {
		c[k]=a[j];
		j++;
		k++;
	}
	 for (i = 0; i < k; i++)  
        a[l + i] = c[i];  
}
void MerageSort(int a[], int b[], int l, int r) {
	if(l<r) {
		int m=(l+r)/2;
		MerageSort(a,b,l,m);
		MerageSort(a,b,m+1,r);
		merage(a,l,m,r,b)
	}

}

int main(){  
    int a[10] = {3,1,5,7,2,4,9,6,10,8};  
    int b[10];  

    print(a,10); 
    MergeSort(a, b, 0,9);   
    print(b,10);  
    return 0;
}  
