#include<iostream>
using namespace std;
void sort(int *a, int n) //a=>array, n=>length of array
{
 int i,j,t;
 for(i=0;i<n-1;i++)
 {
  for(j=i;j<n-i-1;j++) //as last element of array gets automatically sorted.Thus, can be ignored.
  {
   if(a[i]>a[j])
   {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
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
