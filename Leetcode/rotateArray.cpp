#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        queue<int> q;
        for(int i = n-k;i<n;i++){
            q.push(nums[i]);
        }
        for (int i = 0;i<n-k;i++){
            q.push(nums[i]);
        }
        for (int i = 0;i<n;i++){
            nums[i] = q.front();
            q.pop();
        }
    }

    void rotate2(vector<int>& nums, int k){
        int n = nums.size();
        k = k%n;
        // Reverse the whole array
        reverse(nums.begin(),nums.end());
        // Reverse the first k elements
        reverse(nums.begin(),nums.begin()+k);
        // Reverse the last n-k elements
        reverse(nums.begin()+k,nums.end());
    }
};