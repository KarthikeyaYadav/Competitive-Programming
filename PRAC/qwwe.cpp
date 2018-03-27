#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int t,n,q;
	long long int max,p;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		scanf("%d",&q);
		int a[n+1];
		for(int j=1;j<=n;j++){
			scanf("%d",&a[j]);
		}
		int ty,l,r;
		for(int j=0;j<q;j++){
			scanf("%d",&ty);
			scanf("%d",&l);
			scanf("%d",&r);
			if(ty==2){
				a[l]=r;
			}
			else{
				max=0;
				for(int k=l;k<=r;k++){
					p=(a[k]-a[l])*(a[r]-a[k]);
					if(p>max){
					max=p;
					}
				}
				cout<<max<<endl;
			}
		}
	}
	return 0;
}
