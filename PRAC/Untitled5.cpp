#include<cstdio>
#include <stdlib.h> 
#include<iostream>
using namespace std;
int main(){
	int t,a,b,x,y;
	scanf("%d",&t);
	while(t--){
		unsigned long long int d;
		scanf("%d %d %d %d",&a,&b,&x,&y);
		if(a==b && x==y && a==x){
			cout<<0<<" "<<2<<endl;
			cout<<a<<" "<<a<<endl;
		}
		else if(a==b){
			d=abs(x-y);
			cout<<d<<" "<<2<<endl;
			cout<<a<<" "<<a<<endl;
		}
		else if(x==y && a!=b){
			unsigned long long int diff;
			int in1,in2;
			if(a>b){
				d=a-b;
			}
			else d=b-a; 
			for(int i=1;i<=10;i++){
				for(j=1;j<=10;j++){
					diff=abs((a*i)-(b*j));
					if(diff<d){
						d=diff;
						in1
					}
				}
			}
		}
	}
}
