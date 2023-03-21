#include <stdio.h>
#include <iostream> 
#include <string>
using namespace std;
int main(){
	int a,b,y=0;
	cin>>a>>b;
	//check if limak <= bob <=10
	if(a>b||a>10||b>10)
	return 0;
	//while loop
	while(a<=b){
		a*=3;
		b*=2;
		y++;
	}
	cout<<y;
}