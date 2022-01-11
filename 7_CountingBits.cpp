#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int count=0;
     while(n>0)
     {
         int r = n%2;
         count+=r;
         n=n/2;
     }
     return count;
}

int main()
{
    int n;
    cin>>n;

    int size = n+1;
    vector<int>res(size,0);
    
    for(int i=0;i<size;i++)
    {
        res[i]+=solve(i);
    }
    
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
}

/*
Let's call an array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, 
return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1
*/
