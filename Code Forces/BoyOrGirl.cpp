#include <stdio.h>
#include <string>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int i,j,d=0;
	string str; 
	cin>>str;
	//check if string chrs is less thn 100
	if(str.length()<1||str.length()>100)
	return 0;
	sort(str.begin(),str.end());
	for(i=1;i<=str.length();i++){
		if(str[i]!=str[i-1])
		d++;
	}
	if(d%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
}