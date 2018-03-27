#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,m;
		cin>>n>>m;
		int mins[n+1];
		for(int j=1;j<=n;j++)
		cin>>mins[j];
		int ofs[m+1],mjo[m+1];
		for(int j=1;j<=m;j++)
		cin>>ofs[j]>>mjo[j];
		int qual[n+1][m+1];
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k++){
			scanf("%1d",&qual[j][k]);
			}
		}
		
		int nc=0;
		int tsal=0;
		int com[m+1]={0};
		int noj[m+1]={0};
		int osal[n+1]={0};
		int flag;
		for(int j=1;j<=n;j++){
			int ind=0;
			flag=0;
			for(int k=1;k<=m;k++){
				 
				if(qual[j][k]==1){
					if(mins[j]<=ofs[k] && ofs[k]>osal[j] && noj[k]<mjo[k]){
						osal[j]=ofs[k];
						flag=1;
						ind=k;
					}
				}
			}
			if(flag==1){
				nc++;
				tsal=tsal+osal[j];
				com[ind]++;
				noj[ind]++;
			}
		}
		int tot=0;
		for(int z=1;z<=m;z++){
			if(com[z]==0)
			tot++;
		}
		cout<<nc<<" "<<tsal<<" "<<tot<<endl;
	}
	return 0;
}
