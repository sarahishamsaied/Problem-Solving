#include <bits/stdc++.h>
#include <iostream>
#define IOSBASE ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
int main(){
    IOSBASE
    int t;
    cin>>t;
    int count;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        count = 0;
        for (auto &i:arr) cin>>i;
        for(int i = 0 ; i<n-1;i++){
            int mn = min(arr[i],arr[i+1]);
            //4 2 10 1 5
            int mx = max(arr[i],arr[i+1]);
            while(mx>2*mn){
                mn*=2;
                count++;
            }
        }
        cout<<count<<endl;
    }
}