 #include<bits/stdc++.h>
 using namespace std;
 
 int findKthPositive(vector<int>& arr, int k) {
        
      int missing=1;
      vector<int> res;
      while(res.size()<k)
      {
          res.push_back(missing);
          for(int i=0;i<arr.size();i++)
          {
              if(arr[i]==missing)
              {
                  res.pop_back();
              }
          }
          missing++;
      }
      return res[k-1];
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
        int k;
        cin>>k;

        cout<<findKthPositive(v,k)<<endl;
    }
    /*
    Input-:  5
             2 3 4 7 11
             5
             
    Output-: 9

    Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. 
    The 5th missing positive integer is 9.
    */