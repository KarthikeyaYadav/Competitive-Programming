#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--){
    	cin>>n>>m;
    	int a[n][m];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cin>>a[i][j];
			}
		}
		int uf=0;
		for(int i=0;i<n && uf==0;i++){
			for(int j=0;j<m && uf==0;j++){
				int l=-100,u=-100;
				if(a[i][j]==-1){
					if(i==0 && j==0){
						a[i][j]=1;
					}
					else{
					
					if(i!=0){
						u=a[i-1][j];
					}
					if(j!=0){
						l=a[i][j-1];
					}
					//int x=max(l,u);
				//	if(x<0)
				//	x=1;
				int x;
				if(l>=u)
				x=l;
				else x=u;
					a[i][j]=x;
					if(j!=m-1) 
					if( a[i][j+1]!=-1)
					if (a[i][j+1]<a[i][j]){
						uf=1;
						break;
					}
					if(i!=n-1) 
					if( a[i+1][j]!=-1)
					if( a[i+1][j]<a[i][j]){
						uf=1;
						break;
					}
				}
			}
			}
		}
		if(uf){
			cout<<"-1\n";
		}
		else{
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<a[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}
