#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    map <int,int> frequencyMap;
    int ans = 0;
    for(auto & i:v) {cin>>i; frequencyMap[i]++;}
    for (auto i : frequencyMap){
        if(i.second > ans)
            ans = i.second;
    }
    cout<<ans<<endl;
}