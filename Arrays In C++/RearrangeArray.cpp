/*
Given an array arr of n integers, task is to print the array in the order – smallest number, largest number, 2nd smallest number, 2nd largest number, 3rd smallest number, 3rd largest number and so on.

Example 1:

Input:
n = 9
arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5}
Output:
1 9 2 8 3 7 4 6 5
Explanation:
Smallest number is 1. Largest number is 9. 
2nd smallest number is 2. Then 2nd largest
number is 8. And so on.
Example 2:

Input:
n = 4
arr[] = {1, 2, 3, 4}
Output:
1 4 2 3
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n];
    sort(arr1, arr1 + n);
    int j = 0, k = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        arr2[j++] = arr1[i];
        arr2[j++] = arr1[k];
        k--;
    }
    if (n % 2 != 0)
        arr2[j] = arr1[n / 2];
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}