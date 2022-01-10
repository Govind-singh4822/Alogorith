#include<bits/stdc++.h>
using namespace std;
 
 int mySqrt(int x) 
 {
        
        int s=0;
        int e=x;
        long ans=0;
        
        while(s<=e)
        {
            long mid=(s+e)/2;
            
            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid>x)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
                ans=mid;
            }
        }
        return ans;
 }

    int main()
    {
        int n;
        cin>>n;
        cout<<mySqrt(n)<<endl;
    }
    
    /*
    Input: x = 4
    Output: 2

    Input: x = 8
    Output: 2
    Explanation: The square root of 8 is 2.82842..., 
    and since the decimal part is truncated, 2 is returned.
    */