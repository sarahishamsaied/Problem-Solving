#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int n,hi,hf,sum= 0 ,i;
	cin>>n;
	cin>>hf;
	if(n<1||n>1000||hf<1||hf>1000)
	return 0;
	for(i=0;i<n;i++){
		scanf("%d",&hi);
		if(hi<1||hi>2*hf)
		return 0;
		if(hi<=hf)
		sum+=1;
		if(hi>hf)
		sum+=2;
	}
	cout<<sum;
	return 0;
}