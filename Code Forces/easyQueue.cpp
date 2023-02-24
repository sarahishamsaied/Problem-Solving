#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    queue<int>q;
    
    while (n--)
    {
        int query;
        cin>>query;
        if(query==1){
            int y;
            cin>>y;
            q.push(y);
        }
        else if(query==2){
            if(!q.empty()) q.pop();
        }
        else{
            if(q.empty()) cout<<"Empty!\n";
            else cout<<q.front()<<"\n";
        }
    }
    

}