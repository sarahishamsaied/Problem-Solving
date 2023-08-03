#include <iostream>
#include <set>
#include <vector>
using namespace std;

int isYourHorseShoeOnTheOtherRoof(int a, int b, int c, int d){
    vector<int> v = {a,b,c,d};
    set<int> v_set = set<int>(v.begin(),v.end());
    return v.size() - v_set.size();
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << isYourHorseShoeOnTheOtherRoof(a,b,c,d) << endl;
    return 0;
}