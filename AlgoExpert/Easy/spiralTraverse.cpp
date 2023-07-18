#include <bits/stdc++.h>
using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) {
  // Write your code here.
  vector<int> result = {};
  int startingRow = 0, endingRow = array.size()-1, startingCol = 0, endingCol = array[0].size()-1;
  while(startingCol<=endingCol && startingRow<=endingRow ){
    for (int col = startingCol;col<=endingCol;col++)
        result.push_back(array[startingRow][col]);
    for (int row = startingRow+1;row<=endingRow;row++)
        result.push_back(array[row][endingCol]);
    if(startingRow == endingRow || startingCol == endingCol) break;
    for(int col = endingCol-1 ; col>=startingCol;col--)
        result.push_back(array[endingRow][col]);
        for (int r = endingRow-1;r>startingRow;r--)
        result.push_back(array[r][startingCol]);
    startingRow++;
    endingRow--;
    startingCol++;
    endingCol--;
  }
  return result;
}
