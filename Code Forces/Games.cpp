#include <iostream>
using namespace std;
int main(){
    int n,res=0;
    pair <int,int> teams[100];
    cin>>n;
    for(int i = 0 ;i<n;i++){
        cin>>teams[i].first>>teams[i].second;
    }
    for(int i =0;i<n;i++){
        for(int j = i+1 ;j<n;j++){
            if(teams[i].first == teams[j].second)
            res++;
            if( teams[i].second == teams[j].first)
            res++;
        }
    }
    cout<<res;
} 