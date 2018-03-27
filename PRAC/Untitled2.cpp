#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int n,m,k,a,b;
	scanf("%d %d %d",&n,&m,&k);
	vector < vector <int> > vec(n);
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		vec[a].push_back(b);
	}
	
return 0;	
} 
