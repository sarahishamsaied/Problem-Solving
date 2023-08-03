#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;


string dieRoll(int y, int w){
    int chances = 6 - max(y,w) + 1;
    int g = gcd(chances,6);
    return to_string(chances/g) + "/" + to_string(6/g);
}