#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& arr,int k)
{
	int m=arr.size();      // 3 coloumn
	int n=arr[0].size();   // 3	row ele 
	int sz = m*n;


	vector<vector<int> > ans(m,vector<int>(n));

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			ans[(i+(j+k)/n)%m][(j+k)%n]=arr[i][j];   // ans[0][1] = arr[0][0]
		}
	}
	cout<<endl;

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}

	

}


int main()
{
	vector<vector<int>> arr = { {1,2,3},{4,5,6},{7,8,9} };
	int k=1;
	//cin>>k;
	solve(arr,k);
}



/*

Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
Output: 
9 1 2 
3 4 5 
6 7 8 

*/




