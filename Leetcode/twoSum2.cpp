#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int start = 0, end = numbers.size()-1;
        for (int i = 0;i<n;i++){
            if(numbers[start]+numbers[end] > target) --end;
            else if(numbers[start]+numbers[end]<target) ++end;
            else{
                return {start+1,end+1};
            }
        } 
    }
};