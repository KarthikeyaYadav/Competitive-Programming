#include<iostream>
using namespace std;
int main(){
	int n,tq,i1;
	cout<<"enter no. of process along with tq:";
	cin>>n>>tq;
	int a[n],b[n];
	int min=100000,z;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		if(min>a[i]){
			min=a[i];
			z=i;
		}
	}
	int t=a[z];
	int r[1000],pi=-1,ei=-1;
	for(int q=1;q<=tq;q++){
		b[z]=b[z]-1;
		t++;
		for(int j=0;j<n;j++){
			if(t>=a[j] && b[j]>0){
				if(pi==-1){
				
				r[++pi]=j;
				ei++;}
				else r[++ei]=j;
			}
		}
		if(b[z]==0){
			i1=q;
			break;
		}
		i1=q;
	}
	int count;
	
	
}
