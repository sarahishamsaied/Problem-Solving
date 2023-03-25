#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    int ans = 0;
    for(auto & i:v) cin>>i;
    sort(v.begin(),v.end());
    int max = v[n-1];
    for (int i = 0; i < n; i++){
        if(v[i] == max) ans++;       
    }
    cout<<ans<<endl;
}