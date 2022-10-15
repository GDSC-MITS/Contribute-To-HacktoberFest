/*
   @file cyclicSort.cpp
 * @brief Solved the Cyclic sort algorithm;
 *
 * Input Format:
 * First line contaions a single integer n, representing size of thw array
 * Second line contaions n space seperated integers, the elements of array
 *
 * Output Format:
 * Sorted array of size N

 * Note: For cyclic sort algorithm array elements needs to be in range  from  [1 to n]. Only then it will work.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int i = 0;

    while (i < arr.size())
    {
        int correct = arr[i];
        correct--;

        if (arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else
        {
            i++;
        }
    }

    cout << "After Sorting array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}