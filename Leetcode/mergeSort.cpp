#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    void mergeSort(vector<int>& nums,int l,int r){
        if(l<r){
            int m=l+(r-l)/2;
            mergeSort(nums,l,m);
            mergeSort(nums,m+1,r);
            merge(nums,l,m,r);
        }
    }
void merge(vector<int>& nums, int l, int m, int r) {
    int i = l;
    int j = m + 1;
    int k = 0;
    vector<int> b(r - l + 1);

    while (i <= m && j <= r) {
        if (nums[i] <= nums[j]) {
            b[k] = nums[i];
            i++;
        } else {
            b[k] = nums[j];
            j++;
        }
        k++;
    }

    while (i <= m) {
        b[k] = nums[i];
        i++;
        k++;
    }

    while (j <= r) {
        b[k] = nums[j];
        j++;
        k++;
    }

    for (int x = l, y = 0; x <= r; x++, y++) {
        nums[x] = b[y];
    }
}

};

