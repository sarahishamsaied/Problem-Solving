#include <iostream>
using namespace std;
int getMax(int a,int b){
    if(a>b)
    return a;
    return b;
}
int getMin (int a,int b){
    if(a<b)
    return a;
    return b;
}
int main(){
    int a,b,c,max,min;
    cin>>a>>b>>c;
    max = getMax(c,getMax(a,b));
    min = getMin(c,getMin(a,b));
    cout<<min<<" "<<max;
}
