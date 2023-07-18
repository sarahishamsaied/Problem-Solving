#include <string>
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string cleanString = "";
        for (auto i : s){
            bool isAlphaNumeric = i >=65 && i<=90 || i>=97 && i<=122 || i>=0 && i<=9 ;
            if(isAlphaNumeric)
            cleanString+=tolower(i);
        }
        cout<<cleanString;
        for (int i =0,j=cleanString.size()-1;i<cleanString.size()/2;i++,--j){
            if(cleanString[i]!=cleanString[j])
            return false;
        }
        return true;
    }
};