#include <iostream>
#include <vector>


using namespace std;

int colorfulStone(string s, string t){
   int i = 0;
   int j = 0;
   while (j<t.size()){
    if(s[i] == t[j]){
        ++i;
    }
    ++j;
   }
    return i+1;
}

int main(){
    string s,t;
    cin >> s >> t;
    cout << colorfulStone(s,t) << endl;
    return 0;
}

