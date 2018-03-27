#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,p;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	vector < vector <int> > a(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&p);
			a[i].push_back(p);
		}
		sort(a[i].begin(), a[i].end());
		for(int k=0;k<n;k++)
		cout<<a[i][k]<<" ";
		cout<<"\n";
	}
}
}
