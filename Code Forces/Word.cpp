#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
	string str;
	int i,l=0,u=0;
	cin>>str;
	if(str.length()<1||str.length()>100)
	return 0;
	//calc no of lowercase and uppercase letters
	for(i=0;i<str.length();i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		u++;
		if(str[i]>='a'&&str[i]<='z')
		l++;
	}
	//check which is bigger
	if(l>=u){
		for(i=0;i<str.length();i++){
			str[i] = tolower(str[i]);
		}
		}
	else if(u>l){
		for(i=0;i<str.length();i++){
			str[i] = toupper(str[i]);
		}
	}
	cout<<str;
}