#include <bits/stdc++.h>
using namespace std;

void heapify(int a[],int n, int i){
	int l = 2*i +1;
	int r = 2*i +2;
	int largest = i;

	if(l<n && a[l]>a[largest]){
		largest = l;
	}
	if(r<n && a[r]>a[largest]){
		largest = r;
	}
	if(largest != i){
		int t = a[i];
		a[i] = a[largest];
		a[largest] = t;
		heapify(a,n,largest);
	}
}

void buildheap(int a[], int n){
	for (int i = n/2-1; i >= 0; i--)
	{
		heapify(a,n,i);
	}
}

void heapSort(int a[], int n){
	buildheap(a,n);
	int l = n-1;
	for (int i = l; i>=0 ; i--)
	{
		int t = a[0];
		a[0] = a[i];
		a[i] = t;
		heapify(a,i,0);
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
	heapSort(a,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
