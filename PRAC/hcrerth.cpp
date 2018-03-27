#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int n,q,cou;
	scanf("%d",&n);
	scanf("%d",&q);
	//cin>>n>>q;
	int a[n];
	vector <vector <int> > vec(200000);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		vec[a[i]].push_back(i);
		//cin>>a[i];
	}
		
	int y,z;
	char d;
	for(int i=0;i<q;i++){
		//cout<<"hi "<<i<<endl;
		scanf("%d %d %c",&y,&z,&d);
		//scanf("%d",&z);
		//scanf("%c",&d);
		//cin>>y>>z>>d;
		if(vec[z].size()==0)
		printf("-1\n");
		else{
		int min=10000000;
		for(int k=0;k<vec[z].size();k++){
			//cou=0;
			if(d=='R'){
				if(y<=vec[z][k]){
					cou=vec[z][k]-y;
				}
				else{
					cou=n-y+vec[z][k];
				}
				if(min>cou)
				min=cou;
			}
			else{
					if(y>=vec[z][k]){
					cou=y-vec[z][k];
				}
				else{
					cou=y+n-vec[z][k];
				}
				if(min>cou)
				min=cou;
			}
		}
		printf("%d\n",min);
	}
}
return 0;	
} 
