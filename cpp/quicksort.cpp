#include<iostream>
#define n 8
using namespace std;
int partition(int a[],int first,int last){
	int pivot=a[first],i=first,j=last+1;
	do{
		do{
			++i;
		}while(a[i]<pivot && i<=last);
		
		do{
			--j;
		}while(pivot<a[j]);
		if(i<j){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);
	a[first]=a[j];
	a[j]=pivot;
	return first;
} 

void quicksort(int a[],int p, int q){
	if(p<q){
		int x=partition(a,p,q);
		quicksort(a,p,x-1);
		quicksort(a,x+1,q);
	}
}
void print(int a[]){
    for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}	
}
int main(){
	cout<<"enter "<<n<<" elements:\n";
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"sorted array: \n";
	quicksort(a,0,n-1);
	print(a);
	return 0;
}
