#include <stdio.h>
#include <iostream> 
#include <string>
using namespace std;
int main(){
	int n,i,a=0,d=0;
	string str;
	//check if n is positive negative,more than 1000
	cin>>n;
	cin>>str;
		//check if str contains letters other than A or D
		for(i=0;i<n;i++){
			if(str[i]!='A'&&str[i]!='D')
			return 0;
		}
		for(i=0;i<n;i++)
		{
			if(str[i]=='A')
			a++;
			if(str[i]=='D')
			d++;
			
		}
	//check if anton or danik won more games
	if(a>d)
	cout<<"Anton";
	else if(d>a)
	cout<<"Danik";
	else
	cout<<"Friendship";
}