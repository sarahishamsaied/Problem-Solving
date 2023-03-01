#include <bits/stdc++.h>
using namespace std;
bool isValid(string s){
    bool valid = true;
    stack <char> myStack;
    unordered_map <char,char> dict = {
        {')','('},
        {'}','{'},
        {']','['},
    };
    for(int i = 0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') myStack.push(s[i]);
        else{
           if(myStack.top() != dict[s[i]] || myStack.empty() ) return false;
            myStack.pop(); 
        }
    }
    return myStack.empty();
}
int main(){
    int x;
    cout<<isValid("[]{}");
    cin>>x;
}
