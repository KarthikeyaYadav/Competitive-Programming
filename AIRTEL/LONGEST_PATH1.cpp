#include <bits/stdc++.h>
using namespace std;

int bfs(vector< vector<int> > g,int root,int a[],int k,int c[])
{
	queue<int> q;
	q.push(root);
	//visited[root]=true;
	int max=0;
	while(!q.empty())
	{
		int u=q.front();
	//	cout<<u<<"-->";
		q.pop();
		for(int i=0;i<g[u].size();i++)
		{
			
				q.push(g[u][i]);
				if(a[u]%k==0 && a[g[u][i]]%k==0){
					c[g[u][i]]=c[u]+1;
					if(max<c[g[u][i]])
					max=c[g[u][i]];
				}
				//len=len+1;
				//visited[g[u][i]]=true;
				//dis[g[u][i]]=dis[u]+1;
				//cout<<dis[g[u][i]]<<" ";
				//parent[g[u][i]]=u;	
			
		}
	}
	return max;
	
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
	int c[n+1]={0},max=0;
	vector < vector <int> > v(100000);//stores edges
	bool rorn[n+1]={false};
		int x,y;
		for(int i=0;i<n-1;i++){
			cin>>x>>y;
			v[x].push_back(y);
			rorn[y]=true;
		}
		vector <int> root;
		for(int i=1;i<=n;i++){
			if(!rorn[i]){
				root.push_back(i);
				//break;
			}
		}
		int umax=0;
		for(unsigned int j=0;j<root.size();j++){
			c[n+1]={0};
			int ans=bfs(v,root[j],a,k,c);
			if(ans>umax)
			umax=ans;
		}
		//int ans=bfs(v,root,a,k,c);
	/*for(int i=0;i<n-1;i++){
		cin>>u>>v;
		if(a[u]%k==0 && a[v]%k==0){
			c[v]=c[u]+1;
			if(c[v]>max)
			max=c[v];
		}
	}*/
	cout<<umax<<"\n";
	return 0;
}
