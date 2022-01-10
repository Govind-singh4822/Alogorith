#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) 
{
        
      int k=0;
      int n=nums.size();
      
      for(int i=0;i<n;i++)
      {
          if(nums[i]!=0)
          {
              nums[k]=nums[i];
              k++;
          }
      }
      
      for(int i=k;i<n;i++)
      {
          nums[i]=0;
      }

       for(int i=0;i<n;i++)
      {
          cout<<nums[i]<<" ";
      }
             
}

int main()
{
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        moveZeroes(v);
}

/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Input: nums = [0]
Output: [0]
*/