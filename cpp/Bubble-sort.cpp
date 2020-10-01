#include<iostream>
using namespace std;
void sort(int *a, int n) //a=>array, n=>length of array
{
    int i, j, k;  
    for (i = 0; i < n-1; i++){
	for (j = 0; j < n-i-1; j++){
	    if (a[j] > a[j+1]){  
            k = a[j];
            a[j] = a[j+1];
            a[j+1] = k;
	    }
	} 
    }
}
int main() {
	int i, n;
	cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 sort(a, n);
 cout<<"---SORTED ARRAY---";
 for(i=0;i<n;i++)
 cout<<"\n"<<a[i];
 cout<<"\n";
 return 0;
}
