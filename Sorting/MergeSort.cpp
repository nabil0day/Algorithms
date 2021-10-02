#include <iostream>
using namespace std;

void merge(int arr[],int l,int r){
	int mid=(l+r)/2;
	
	int n=mid-l+1;
	int m=r-mid;
	
	int A[n],B[m];
	

	int i=0,j=0,k;
	for(i=0,j=l;i<n;i++,j++)
    {
		A[i]=arr[j];
	}
	for(i=0,j=mid+1;i<m;i++,j++)
    {
		B[i]=arr[j];
	}
	
	i=j=0;
	k=l;
	while(i<n&&j<m)
    {
		if(A[i]<B[j])
        { 
			arr[k]=A[i];
			i++;
		}else{  
			arr[k]=B[j];
			j++;
		}
	}
	
	
	while(i<n){
		arr[k]=A[i];
		i++;
		k++;
	}
	while(j<m){
		arr[k]=B[j];
		j++;
		k++;
	}
	return;
}
void mergeSort(int arr[],int l,int r){
	if(l>=r) return; 
	
	int mid=(l+r)/2; 
	mergeSort(arr,l,mid); 
	mergeSort(arr,mid+1,r);  
	
	merge(arr,l,r); 
	return;
}
int main()
{
    int n;
    cin>>n;

	int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++)
    {
		cout<<arr[i]<<" ";
	}
}