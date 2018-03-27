#include<iostream>
using namespace std;
int main(){
	int n,q;
	cout<<"enter no. of process:";cin>>n;
	int a[n],b[n];
	int min=10000,z;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		if(min>a[i]){
		z=i;
		min=a[i];
	}
	}
	int t=b[z];
	int c[n],com[n]={0};
	com[z]=1;
	for(int i=0;i<n;i++)
	c[i]=b[z];
	int count=1;
	while(count<n){
	float mbt=0;
	for(int i=0;i<n;i++){
		float p=(float)((c[i]-a[i])+b[i])/(float)b[i];
	//	cout<<endl<<"p:"<<p<<endl;
		if(com[i]==0 && t>=a[i] && mbt<p){
		mbt=p;
		z=i;
	}
	}
	com[z]=1;
	count++;
	c[z]=c[z]+b[z];
	for(int y=0;y<n;y++){
		if(com[y]==0)
		c[y]=c[y]+b[z];
	cout<<c[y]<<" ";
	}
		t=t+b[z];
		cout<<endl<<"t:"<<t<<endl;
		cout<<endl<<"enter:";
	cin>>q;
	cout<<endl;
}
for(int s=0;s<n;s++)
cout<<c[s]<<" ";
return 0;
}
