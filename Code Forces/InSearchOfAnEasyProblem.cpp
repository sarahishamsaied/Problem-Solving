#include<iostream>
#include<cstdlib>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        if(c==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}