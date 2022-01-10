// Lagrgest Rectangle in Histogram
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int ans=0,i=0;
    stack<int>s;

    while(i<n)
    {
        while(!s.empty() && arr[s.top()]>arr[i])
        {
            int t = s.top();
            int h = arr[t];
            if(s.empty())
            {
                ans = max(ans,h*i);
            }
            else
            {
                int len = i-s.top()-1;
                ans = max(ans,h*len);
            }
        }
        s.push(i);
        i++;
    }
    
}