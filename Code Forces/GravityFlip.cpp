#include <stdio.h>
#include <iostream> 
#include <string>
using namespace std;
int main(){
	int n,i,temp,j;
	int arr[100];
	cin>>n;
	if(n<1||n>100)
	return 0;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j])
			{
			temp = arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
			}
			
		}
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}