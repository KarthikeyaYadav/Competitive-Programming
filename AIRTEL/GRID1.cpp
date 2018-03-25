#include <bits/stdc++.h>
using namespace std;
void bfs(vector< vector<int> > g,int root,vector <int>& dis,bool visited[],int nv)
{
	queue<int> q;
	q.push(root);
	visited[root]=true;
	while(!q.empty())
	{
		int u=q.front();
	//	cout<<u<<"-->";
		q.pop();
		for(int i=0;i<g[u].size();i++)
		{
			if(!visited[g[u][i]])
			{
				q.push(g[u][i]);
				visited[g[u][i]]=true;
				dis[g[u][i]]=dis[u]+1;
				//cout<<dis[g[u][i]]<<" ";
				//parent[g[u][i]]=u;	
			}
		}
	}
	
}

int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m,q;
	cin>>n>>m>>q;
	//int mat[n][m];
	int nv=n*m;
	vector< vector<int> > mat;
	mat.resize(n, std::vector<int>(m));
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<m;j++){
			if(s[j]=='O'){
				mat[i][j]=1;
			}
			else mat[i][j]=0;
		}
	}
	vector < vector < int > > g(nv);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int ver=(i*m)+j;
			if(i!=0 && mat[i-1][j]==1){
				g[ver].push_back(ver-m);
			}
			if(i!=n-1 && mat[i+1][j]==1){
				g[ver].push_back(ver+m);
			}
			if(j!=0 && mat[i][j-1]==1){
				g[ver].push_back(ver-1);
			}
			if(j!=m-1 && mat[i][j+1]==1){
				g[ver].push_back(ver+1);
			}
		}
	}
	int si,sj,di,dj;
	cin>>si>>sj;
	si--;
	sj--;
	int sver=(si*m)+sj;
	vector < int > dis(nv,0);
	bool visited[nv]={false};
	bfs(g,sver,dis,visited,nv);
	/*for(int i=0;i<nv;i++){
		cout<<dis[i]<<" ";
	}
	cout<<"\n";*/
	while(q--){
		cin>>di>>dj;
		di--;dj--;
		int des=(di*m)+dj;
		if(des==sver)
		cout<<0<<"\n";
		else{
		
		int ans=dis[des];
		if(ans==0)
		cout<<-1<<"\n";
		else cout<<ans<<"\n";
	}
	}
}
