/*
Given an array of N positive integers where all numbers occur even number of times except one number which occurs odd number of times. Find the exceptional number.

Example 1:

Input:
N = 7
Arr[] = {1, 2, 3, 2, 3, 1, 3}
Output: 3

Example 2:

Input:
N = 7
Arr[] = {5, 7, 2, 7, 5, 2, 5}
Output: 5

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getOddOccurrence(int arr[], int n)
    {
        // code here
        map<int, int> hmap;
        for (int i = 0; i < n; i++)
        {
            hmap[arr[i]]++;
        }
        for (auto i : hmap)
        {
            if (i.second % 2 != 0)
                return i.first;
        }
        return -1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}