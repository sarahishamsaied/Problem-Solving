#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    stack<int>s;
    while(n--){
        int query;
        cin>>query;
        if(query==1){
            int y;
            cin>>y;
            s.push(y);
        }
        else if(query==2){
            if(!s.empty()) s.pop();
        }
        else{
            if(s.empty()) cout<<"Empty!\n";
            else cout<<s.top()<<"\n";
        }
    }
    return 0;
}
