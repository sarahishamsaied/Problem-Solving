#include <iostream>
using namespace std;
int sum (int a,int b){
    return a+b;
}
int sub (int a,int b){
    return a-b;
}
int mult (int a,int b){
    return a*b;
}
// int div (int a,int b){
//     return a / b;
// }
int calculator(char op,int a,int b){
    if(op == '+')
    return sum(a,b);
    if(op == '-')
    return sub(a,b);
    if(op == '*')
    return mult(a,b);
    // if(op == '/')
    // return div(a,b);

}
int main(){
    char op;
    int a,b;
    cin>>a>>op>>b;
    int x = calculator(op,a,b);
    cout<<x;
}
