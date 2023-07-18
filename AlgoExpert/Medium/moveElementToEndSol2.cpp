#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
    int i = 0, j=array.size()-1;
    while(i<j){
        if(array[j] == toMove) --j;
        else if(array[i] == toMove){
            swap(array[i],array[j]);
            ++i;
            --j;
        }
        else ++i;
    }
  return array;
}
