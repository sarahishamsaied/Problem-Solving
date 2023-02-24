#include <bits/stdc++.h>
using namespace std;
char flipChar(char c){
    if(c==')') return '(';
    else if(c == '}') return '{';
    else if(c == ']') return '[';
    else return '{';
}
string isBalanced(string str){
    stack<char> s;
    bool valid = true;
    for(auto i:str){
        if(i == '(' || i == '{' || i == '[' )
        s.push(i);
        else{
            if(flipChar(i) != s.top() || str.empty() ){
            valid = false;
            break;
            }
            s.pop();
        }
    }
    return valid ? "YES\n":"NO\n";
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
