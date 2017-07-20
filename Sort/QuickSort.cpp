#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int p, int r){
	int x = a[r];
	int i = p-1;
	for (int j = p; j <r; ++j)
	{
		if(a[j]<=x){
			i++;
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	int s = a[i+1];
	a[i+1] = a[r];
	a[r] = s;
	return (i+1);
}

void quickSort(int a[], int p, int r){
	if(p<r){
		int q = partition(a,p,r);
		quickSort(a,p,q-1);
		quickSort(a,q+1,r);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	quickSort(a,0,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}