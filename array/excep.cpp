#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long solve(int row, int col, int tilesRemaining, int occupiedMask, int totalRows, int totalCols, const vector<vector<int>>& grid, vector<vector<vector<long long>>>& memo) {
    if (tilesRemaining == 0) {
        return 0;
    }
    if (row == totalRows) {
        return -1e18;
    }
    if (memo[row][col][occupiedMask] != -1) {
        return memo[row][col][occupiedMask];
    }
    
    long long maxResult = -1e18;
    int nextRow = row, nextCol = col + 1;
    if (nextCol == totalCols) {
        nextRow++;
        nextCol = 0;
    }
    
    if ((occupiedMask & (1 << col)) == 0) {
        maxResult = max(maxResult, solve(nextRow, nextCol, tilesRemaining, 0, totalRows, totalCols, grid, memo));
    } else {
        maxResult = max(maxResult, solve(nextRow, nextCol, tilesRemaining, occupiedMask & (~(1 << col)), totalRows, totalCols, grid, memo));
    }
    
    if (col + 1 < totalCols && (occupiedMask & (1 << col)) == 0 && (occupiedMask & (1 << (col + 1))) == 0) {
        maxResult = max(maxResult, (long long)grid[row][col] + grid[row][col + 1] + solve(nextRow, nextCol, tilesRemaining - 1, 0, totalRows, totalCols, grid, memo));
    }
    
    if (row + 1 < totalRows && (occupiedMask & (1 << col)) == 0) {
        maxResult = max(maxResult, (long long)grid[row][col] + grid[row + 1][col] + solve(nextRow, nextCol, tilesRemaining - 1, (1 << col), totalRows, totalCols, grid, memo));
    }
    
    return memo[row][col][occupiedMask] = maxResult;
}

long long calculateMaxSum(int rows, int tiles, vector<vector<int>> gridData) {
    int cols = gridData[0].size();
    vector<vector<vector<long long>>> memo(rows, vector<vector<long long>>(cols, vector<long long>(1 << cols, -1)));
    return solve(0, 0, tiles, 0, rows, cols, gridData, memo);
}

int main() {
    int numRows, numTiles;
    cin >> numRows >> numTiles;
    
    vector<vector<int>> gridData(numRows, vector<int>(3));
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> gridData[i][j];
        }
    }
    
    long long answer = calculateMaxSum(numRows, numTiles, gridData);
    cout << answer << endl;
    return 0;
}