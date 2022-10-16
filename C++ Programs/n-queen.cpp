/**
 * @file n-queen.cpp
 * @brief Solved the N-Queen problem;
 *
 * Input Format:
 * A single integer n, represent n x n, chessboard
 *
 * Output Format:
 * -1, if it is not possible to place the queens in the required order, else n x
 * n grid, in which 0 represents an empty square and 1 represents a Queen
 */

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int** arr, int x, int y, int n) {
  for (int row = 0; row < x; row++) {
    if (arr[row][y] == 1) {
      return false;
    }
  }
  int row = x;
  int col = y;

  while (row >= 0 && col >= 0) {
    if (arr[row][col] == 1) {
      return false;
    }
    row--;
    col--;
  }
  row = x;
  col = y;

  while (row >= 0 && col < n) {
    if (arr[row][col] == 1) {
      return false;
    }
    row--;
    col++;
  }
  return true;
}

bool nQueen(int** arr, int x, int n) {
  if (x >= n) {
    return true;
  }
  for (int col = 0; col < n; ++col) {
    if (isSafe(arr, x, col, n)) {
      arr[x][col] = 1;

      if (nQueen(arr, x + 1, n)) {
        return true;
      }

      arr[x][col] = 0;
    }
  }
  return false;
}

int main() {
  int n;
  cin >> n;

  // allocate our 2-D matrix;
  int** arr = new int*[n];
  for (int i = 0; i < n; ++i) {
    arr[i] = new int[n];
    for (int j = 0; j < n; ++j) {
      arr[i][j] = 0;
    }
  }

  if (!nQueen(arr, 0, n)) {
    cout << -1 << endl;
    return 1;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}