#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Sort the array
        sort(nums.begin(),nums.end());
        int left = 0, right = nums.size()-1;
        vector<vector<int>> result;
        for (int i = 0;i<nums.size()-2;i++){
            left = i+1;
            right = nums.size()-1;
            while(left<right){
                int currentSum = nums[i]+nums[left]+nums[right];
                if(currentSum == 0){
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left] == nums[left+1]) ++left;
                    while(left<right && nums[right]== nums[right-1])--right;
                    ++left;
                    --right;
                }
                else if(currentSum < 0) ++left;
                else --right;
            }
        }
        return result;
    }
};