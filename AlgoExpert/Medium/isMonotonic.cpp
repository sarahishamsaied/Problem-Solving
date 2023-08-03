#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int> array) {
  // Write your code here.
  if(array.size() <= 2) return true;
  bool isIncreasing = array[0] < array[array.size()-1];
  for (int i = 0;i<array.size();i++){
    if(i < array.size()-1){
    if(array[i] > array[i+1] && isIncreasing) return false;
    if(array[i] < array[i+1] && !isIncreasing) return false;
    }
  }
  return true;
}


int main(){
    vector<int> array = {-1,-5,-10,-1100,-1100,-1101,-1102,-9001};
    cout<<"result";
    cout << isMonotonic(array);
    return 0;
}