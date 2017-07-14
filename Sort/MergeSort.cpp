#include <bits/stdc++.h>
using namespace std;

void simpleMerge(int a[], int p, int r, int q)
{

	int n1 = r-p+1;
	int n2 = q-r;
	int i,j,k;
	int L[n1],R[n2];
	for (i = 0; i < n1; ++i)
	{
		L[i] = a[p+i];
	}
	for (i = 0; i < n2; ++i)
	{
		R[i] = a[r+i+1];
	}
	i=0;
	j=0;
	k=p;
	while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k++] = R[j++];
        }
    }
    while (i < n1)
    {
        a[k++] = L[i++];
    }
    while (j < n2)
    {
        a[k++] = R[j++];
	}

}

void mergeSort(int a[], int p, int q)
{
	
	if (p<q)
	{
	int r = (p+q)/2; 
	
	mergeSort(a,p,r);
	mergeSort(a,r+1,q);
	simpleMerge(a,p,r,q);
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}