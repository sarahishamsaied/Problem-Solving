#include <string>
#include <iostream>
using namespace std;
int main(){
	int n,i,g=0;
	string arr[100000];
	//check no of inputs
	cin>>n;
	//input array
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(arr[i]!=arr[i+1])
		g++;
	}
	cout<<g;
}