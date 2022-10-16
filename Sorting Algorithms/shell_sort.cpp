/**
 * @file shell_sort.cpp
 * @brief Solved the shell sort algorithm;
 *
 * Input Format:
 * First line contaions a single integer n, representing size of thw array
 * Second line contaions n space seperated integers, the elements of array
 *
 * Output Format:
 * Sorted array of size N
 */

#include <bits/stdc++.h>
using namespace std;

// Shell sort
void shellSort(int array[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

// Print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++) cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  shellSort(arr, n);
  cout << "Sorted array: \n";
  printArray(arr, n);
}