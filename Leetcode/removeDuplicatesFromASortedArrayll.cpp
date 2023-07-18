#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int n = nums.size();
        int r=0,l=0;
        while(r<n){
        count = 1;
        // counting the number of duplicates
        while(r+1 < n && nums[r] == nums[r+1]){
            ++count;
            ++r;
        }
        int minimum = min(2,count);
        // removing the duplicates
        for(int i = 0;i<minimum;i++){
            nums[l] = nums[r];
            l++;
        }
        r++;
    }
    return l;
}
};