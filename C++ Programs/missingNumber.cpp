/*
   @file missingNumer.cpp
 * @brief Solved the Missing number problem;
 *
 * Question :- Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
 *
 * Input Format:
 * First line contaions a single integer n, representing size of thw array
 * Second line contaions n space seperated integers, the elements of array
 *
 * Output Format:
 * It outputs the missing number.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;

    while (i < arr.size())
    {
        int correct = arr[i];

        if (arr[i] < arr.size() && arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else
        {
            i++;
        }
    }

    for (int index = 0; index < arr.size(); index++)
    {
        if (arr[index] != index)
        {
            cout << index << endl;
        }
    }

    return 0;
}