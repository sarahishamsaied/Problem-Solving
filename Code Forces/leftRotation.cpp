#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){
    int n,d;
    cin>>n;
    cin>>d;
    deque<int>v(n);
    for(auto &i:v){
        cin>>i;
    }
    for(int i= 0; i<d; i++){
        int x = v.front();
        v.pop_front();
        v.push_back(x);
    }
    for(auto i:v){
        cout<<i<<" ";
    }

}