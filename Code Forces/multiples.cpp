#include <iostream>
#include <vector>
using namespace std;
int main(){
//Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
int a,b;
cin>>a>>b;
if(a%b==0 || b%a ==0)
cout<<"Multiples";
else
cout<<"No Multiples";
}