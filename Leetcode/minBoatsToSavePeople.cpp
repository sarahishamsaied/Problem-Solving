#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i = 0, j = people.size()-1;
        int minBoats = 0;
        while(i<=j){
            int remaining = limit - people[j];
            --j;
            minBoats++;
            if(remaining >= people[i])
                ++i;
        }
        return minBoats;
    }
};