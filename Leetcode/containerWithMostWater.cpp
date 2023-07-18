#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size() -1 ;
        int left = 0, right = n;
        int maxArea = 0;
        while(left<right){
            int currentArea = min(height[left], height[right]) * (right-left);
            maxArea = max(currentArea,maxArea);
            if(height[left]<height[right])++left;
            else --right ;
        }
        return maxArea;
    }
};