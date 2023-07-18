#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> frequencyMap = {};
        int n = wall.size();
        for (int i =0; i< n; i++){
            int current = 0;
            for (int j = 0; j<wall[i].size(); j++){
                current+=wall[i][j];
                ++frequencyMap[current];
            }
            
        }
            int m = 0;
            for (auto i : frequencyMap){
                m = max(m,i.second);
            }
            return  n - m;
    }
};
