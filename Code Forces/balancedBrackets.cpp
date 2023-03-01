#include <bits/stdc++.h>
using namespace std;
char flipChar(char c){
    if(c==')') return '(';
    else if(c == '}') return '{';
    else if(c == ']') return '[';
    else return '{';
}
bool isValid(string s){
    stack<char> myStack;
    bool valid = true;
    for(auto i:s){
        if(i == '(' || i == '{' || i == '[' ) myStack.push(i);
        else{
            if(flipChar(i) != myStack.top() || s.empty() ){
            valid = false;
            break;
            }
            myStack.pop();
        }
    }
    return myStack.empty();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string str;
    int n;
    cin>>n;
    while(n--){
    cin>>str;
    string result = isBalanced(str);
    cout<<result;
    }

}
