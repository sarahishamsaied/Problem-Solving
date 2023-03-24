#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int noOfChangesToMakePermutation(vector<int> arr,int n){
    set<int> mySet;
    for (auto element : arr){
        if(element <= n)
           mySet.insert(element); 
    }
    return n - mySet.size();
}
int main(){
    int n;
    cin>>n;
    //1 1 2 2 8 8 7 7 9 9
    //1 2 8 7 9
    vector <int> v(n);
    for(auto &i:v)
        cin>>i;
    cout<<noOfChangesToMakePermutation(v,n)<<endl;
}