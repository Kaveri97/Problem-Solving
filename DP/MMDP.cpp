#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int P[n+1];
	for (int i = 0; i <= n; ++i)
	{
		cin>>P[i];
	}
	int M[n+1][n+1];
	int S[n+1][n+1];
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= n; ++j)
		{
			S[i][j] = 0;
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		M[i][i] = 0;
	}
	for (int i = 2; i < n+1; ++i)
	{	
		for (int j = 1; j < n-i+2; ++j)
		{
			int l = i+j-1;
			M[j][l] = INT_MAX;
			for (int k = j; k <= l-1; ++k)
			{
				int q = M[j][k] + M[k+1][l] + (P[j-1]*P[k]*P[l]);
				if(q < M[j][l]){
					M[j][l] = q;
					S[j][l] = k;
				}
			}
		}
	}
	cout<<M[1][n]<<endl;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cout<<S[i][j]<<" ";
		}
		cout<<endl;
	}
}