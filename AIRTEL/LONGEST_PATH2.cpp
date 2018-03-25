#include <bits/stdc++.h>
using namespace std;
 
 void update(vector < vector <int> > edg,vector <int> &c,int v){
 	for(int i=0;i<edg[v].size();i++){
 		c[edg[v][i]]++;
 		if(edg[edg[v][i]].size()!=0){
 			for(int j=0;j<edg[edg[v][i]].size();j++)
 			update(edg,c,edg[edg[v][i]][j]);
		 }
	 }
 }
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	vector <int> c(n+1,0);int max=0,u,v;
	vector < vector <int> > edg(100001);
	for(int i=0;i<n-1;i++){
		cin>>u>>v;
		
		if(a[u]%k==0 && a[v]%k==0){
			if(edg[v].size()!=0){
				c[v]++;
				update(edg,c,v);
			}
			int temp=c[u]+1;
			if(temp>c[v])
			c[v]=c[u]+1;
			if(c[v]>max)
			max=c[v];
		}
		edg[u].push_back(v);
	}
	for(int i=1;i<=n;i++){
		if(max<c[i])
		max=c[i];
	}
	cout<<max<<"\n";
	return 0;
}
