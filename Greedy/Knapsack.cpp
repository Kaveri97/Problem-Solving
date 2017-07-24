#include <bits/stdc++.h>
using namespace std;

struct knapsack{
	int I,X;
	float V,P;
};

bool compare(knapsack k1, knapsack k2){
	return k1.P>k2.P;
}

int main(){
	int n;
	cin>>n;
	struct knapsack o[n],t;
	t.I = 0;
	t.V = 0;
	t.P = 0;
	t.X = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>o[i].V>>o[i].X;
		o[i].I = i+1;	
		o[i].P = o[i].V/o[i].X;
	}
	sort(o,o+n,compare);
	int W,amt,val=0;
	float W1;
	cin>>W;
	int i=0;
	while(W>0){
		amt = min(W,o[i].X);
		if(amt == o[i].X){
			val += o[i].V;
		}else{
			W1 = W;
			val += W1/o[i].X*o[i].V;
		}
		W -= amt;
		cout<<o[i].I;
		i++;
	}
	cout<<endl<<val;
}


