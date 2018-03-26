#include <bits/stdc++.h>
using namespace std;

int maxCoins(int coins[], int m, int V)
{
	// table[i] will be storing the minimum number of coins
	// required for i value. So table[V] will have result
	int table[V+1];

	// Base case (If given value V is 0)
	table[0] = 0;

	// Initialize all table values as Infinite
	for (int i=1; i<=V; i++)
		table[i] = INT_MIN;

	// Compute minimum coins required for all
	// values from 1 to V
	for (int i=1; i<=V; i++)
	{
		// Go through all coins smaller than i
		for (int j=0; j<m; j++)
		if (coins[j] <= i)
		{
			int sub_res = table[i-coins[j]];
			if (sub_res != INT_MIN && sub_res + 1 > table[i])
				table[i] = sub_res + 1;
		}
	}
	return table[V];
}

int minCoins(int coins[], int m, int V)
{
	// table[i] will be storing the minimum number of coins
	// required for i value. So table[V] will have result
	int table[V+1];

	// Base case (If given value V is 0)
	table[0] = 0;

	// Initialize all table values as Infinite
	for (int i=1; i<=V; i++)
		table[i] = INT_MAX;

	// Compute minimum coins required for all
	// values from 1 to V
	for (int i=1; i<=V; i++)
	{
		// Go through all coins smaller than i
		for (int j=0; j<m; j++)
		if (coins[j] <= i)
		{
			int sub_res = table[i-coins[j]];
			if (sub_res != INT_MAX && sub_res + 1 < table[i])
				table[i] = sub_res + 1;
		}
	}
	return table[V];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[k];
    for(int i=0;i<k;i++)
    cin>>a[i];
   // sort(a,a+k);
    int min=1000000000,max=0;
    
		max=maxCoins(a, k, n);
		if(max==INT_MIN)
		max=-1;
		min=minCoins(a, k, n);
		if(min==INT_MAX)
		min=-1;
	
	cout<<min<<" "<<max<<"\n";
	return 0;
}
