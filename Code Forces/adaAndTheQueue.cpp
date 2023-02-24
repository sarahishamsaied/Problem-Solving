#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    deque <int> q;
    int n;
    cin>>n;
    bool reversed = false;
    while(n--){
        int x;
        string query;
        cin>>query;
        if(query == "back")
        {
            if(!reversed){
                if(q.empty())
                cout<<"No job for Ada?\n";
                else{
                cout<<q.back()<<"\n";
                q.pop_back();
                }
            }
            else{
                if(q.empty())
                cout<<"No job for Ada?\n";
                else{
                cout<<q.front()<<"\n";
                q.pop_front();
                }
            }

        }
        else if (query == "front"){
            if(!reversed){
            if(q.empty())
                cout<<"No job for Ada?\n";
            else{
                cout<<q.front()<<"\n";
                q.pop_front();
            }
        }
            else{
                if(q.empty())
                cout<<"No job for Ada?\n";
                else{
                    cout<<q.back()<<"\n";
                    q.pop_back();
                }
            }
 
        }
        else if(query == "reverse"){
            reversed = !reversed;
        }
        else if(query == "push_back")
        {
            cin>>x;
            if(!reversed)q.push_back(x);
            else q.push_front(x);
            

        }
        else if(query == "toFront"){
            cin>>x;
            if(!reversed) q.push_front(x);
            else q.push_back(x);
        }
    }

}