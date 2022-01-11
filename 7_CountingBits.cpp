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
