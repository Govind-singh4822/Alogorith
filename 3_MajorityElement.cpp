 #include<bits/stdc++.h>
 using namespace std;
 
 int MajorityElement(vector<int>& nums) {
        
       int n = nums.size();
        
        map<int,int>m;
        
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        
        int res=0;
        
        for(int i=0;i<n;i++)
        {
            if(m[nums[i]]>n/2)
            {
                res=nums[i];
                break;
            }
        }
        return res;
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

        cout<<MajorityElement(v)<<endl;
    }
    /*
    The majority element is the element that appears 
    more than ⌊n / 2⌋ times. You may assume that the 
    majority element always exists in the array.
    
    Input-:  7            
             2 2 1 1 1 2 2
             
    Output-: 2
    */