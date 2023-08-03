#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j = 0;
        while(i<haystack.size() && j<needle.size()){
            if(haystack[i] == needle[j]){
                ++i;
                ++j;
            }
            else{
                ++i;
                j = 0;
            }
        }
        if(j == needle.size()) return i-j;
        else return -1;
    }
};