#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int q,l;
	//scanf("%d",&q);
	cin>>q;
	while(q--){
		int c=0;
		//scanf("%d",&l);
		cin>>l;
		int div=l/4;
		char ch;
		int f1[26]={0};
		int f2[26]={0};
		for(int i=0;i<div;i++){
			cin>>ch;
			//scanf("%c",&ch);
			f1[(int)ch-97]++;
		}
		for(int i=0;i<div;i++){
			cin>>ch;
			//scanf("%c",&ch);
			f2[(int)ch-97]++;
		}
		for(int i=0;i<div;i++){
			cin>>ch;
			//scanf("%c",&ch);
			if(f2[(int)ch-97]>0){
					f2[(int)ch-97]--;
			}
			else {
				c++;
			}
		}
		for(int i=0;i<div;i++){
			cin>>ch;
			//scanf("%c",&ch);
			if(f1[(int)ch-97]>0){
					f1[(int)ch-97]--;
			}
			else {
				c++;
			}
		}
		if(c>0){
			cout<<"NO "<<c<<endl;
			//printf("NO %d\n",c);
		}
		else{
			cout<<"YES\n";
		} //printf("YES\n");
	}
}
