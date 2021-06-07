/*
Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.

 

Example 1:

Input:
N = 7
Arr = {1, 2, 3, 5, 4, 7, 10}
Output:
7 5 3 1 2 4 10
Explanation:
Array elements 7 5 3 1 are odd
and sorted in descending order,
whereas 2 4 10 are even numbers
and sorted in ascending order.
 

Example 2:

Input:
N = 7
Arr = {0, 4, 5, 3, 7, 2, 1}
Output:
7 5 3 1 0 2 4
*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 5, 4, 7, 10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arrOdd[n],j=0,k=0,x=0;
    int arrEven[n];
    sort(arr1, arr1+n, greater<int>());
    for(int i=0;i<n;i++)
    {
        if(arr1[i]%2!=0)
            arrOdd[j++] = arr1[i];
        else
            arrEven[k++] = arr1[i];
    }
    sort(arrEven, arrEven+k);
    sort(arrOdd, arrOdd+j, greater<int>());
    for(int i=0;i<j;i++)
    {
        arr1[i] = arrOdd[i];
    }
    for(int i=j;i<n;i++)
    {
        arr1[i] = arrEven[x++];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}