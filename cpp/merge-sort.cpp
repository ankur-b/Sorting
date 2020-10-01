#include<bits/stdc++.h>
using namespace std;

merge(int arr[], int l, int mid, int r){
	
	int x = mid-l+1;
	int y = r-mid;
	int temp1[x], temp2[y];
	
	for(int i=0;i<x;i++)
	temp1[i] = arr[l+i];
	for(int i=0;i<y;i++)
	temp2[i] = arr[mid+1+i];
	
	int a=0, b=0, c=l;
	while(a<x&&b<y){
		if(temp1[a]<=temp2[b]){
			arr[c] = temp1[a];
			a++;
		} else {
			arr[c] = temp2[b];
			b++;
		}
		c++;
	}
	
	while(a<x){
		arr[c]= temp1[a];
		a++;
		c++;
	}
	while(b<y){
		arr[c] =temp2[b];
		b++;
		c++;
	}
}

mergeSort(int a[], int l, int r){
	if(l<r){
		int mid = l+(r-l)/2;
		
		mergeSort(a, l, mid);
		mergeSort(a, mid+1, r);
		
		merge(a, l, mid, r);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	mergeSort(a, 0, n-1);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
