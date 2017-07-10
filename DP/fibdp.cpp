#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,j;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		long int n,j=2;
		cin>>n;
		long int fib[n];
		fib[0]=0, fib[1]=1;
		while(j<n){
			fib[j] = fib[j-1]+fib[j-2];
			j++;
		}
		cout<<fib[n-1]<<endl;
	}
}