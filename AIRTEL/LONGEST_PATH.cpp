#include <bits/stdc++.h>
using namespace std;

int bfs(vector< vector<int> > g,int root,int a[],int k)
{
	queue<int> q;
	q.push(root);
	//visited[root]=true;
	int len=0;
	while(!q.empty())
	{
		int u=q.front();
	//	cout<<u<<"-->";
		q.pop();
		for(int i=0;i<g[u].size();i++)
		{
			if(a[g[u][i]]%k==0)
			{
				q.push(g[u][i]);
				len=len+1;
				//visited[g[u][i]]=true;
				//dis[g[u][i]]=dis[u]+1;
				//cout<<dis[g[u][i]]<<" ";
				//parent[g[u][i]]=u;	
			}
		}
	}
	return len;
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];//stores Ai
    unordered_set<int> u;//stores Ai which is divisible by K
    vector < vector <int> > vk(100000);//stores the vertex number
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]%k==0 && u.find(arr[i]) == u.end()){
    		u.insert(a[i]);
		}
		if(a[i]%k==0){
			vk[a[i]].push_back(i);
		}
	}
		vector < vector <int> > v(100000);//stores edges
		int x,y;
		for(int i=0;i<n-1;i++){
			cin>>x>>y;
			v[x].push_back(y);
		}
		int ml=0;
		unordered_set<int> :: iterator itr;
		for(itr=u.begin();itr!=u.end();itr++){
			for(int i=0;i<vk[(*itr)].size();i++){
				int len=bfs(v,vk[(*itr)][i],a,k);
				if(ml<len)
				ml=len;
			}
		}
		cout<<ml<<"\n";
	
	return 0;
}
