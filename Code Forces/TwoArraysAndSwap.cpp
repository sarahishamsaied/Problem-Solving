#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    //test cases and max swaps
    int t,k;
    //arrays
    vector <int> a,b;
    cin>>t;
    int count = 0;
    while (t--)
    {
        int n;
        cin>>n>>k;
        a.resize(n);
        b.resize(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0; i<n; i++){
            if(k>0 && a[i]<b[i]){
                swap(a[i],b[i]);
                k--;
            }
        }
        for(int i=0; i<n; i++){
            count+=a[i];
        }
        cout<<count<<endl;
        count = 0;

    }
}