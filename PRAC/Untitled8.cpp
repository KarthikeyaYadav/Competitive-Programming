#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a[3],b[3],c[3];
	for(int i=0;i<t;i++){
		cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2]>>c[0]>>c[1]>>c[2];
		int f1=0,f2=0,f3=0;
		if((a[0]>=b[0]&&a[1]>=b[1]&&a[2]>=b[2])||(a[0]<=b[0]&&a[1]<=b[1]&&a[2]<=b[2]))
		f1=1;
		if((a[0]>=c[0]&&a[1]>=c[1]&&a[2]>=c[2])||(a[0]<=c[0]&&a[1]<=c[1]&&a[2]<=c[2]))
		f2=1;
		if((b[0]>=c[0]&&b[1]>=c[1]&&b[2]>=c[2])||(b[0]<=c[0]&&b[1]<=c[1]&&b[2]<=c[2]))
		f3=1;
		if(f1==1&&f2==1&&f3==1){
			.
			..+
		if((a[0]==c[0]&&a[1]==c[1]&&a[2]==c[2])||(a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2])||(c[0]==b[0]&&c[1]==b[1]&&c[2]==b[2]))
		cout<<"no"<<endl;
		else cout<<"yes"<<endl;}
		else cout<<"no"<<endl;
	}
}
