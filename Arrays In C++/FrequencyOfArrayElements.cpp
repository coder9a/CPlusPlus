#include <bits/stdc++.h>
#include<iostream>
using namespace std;
        // Time Complexity = O(n)
        // Space Complexity = O(n)
int main()
{
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int> hmap;
    for(int i=0;i<n;i++)
    {
        hmap[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hmap[arr[i]]!=-1)
            cout<<arr[i]<<" "<<hmap[arr[i]]<<endl;
        hmap[arr[i]] = -1;
    }
    return 0;
}