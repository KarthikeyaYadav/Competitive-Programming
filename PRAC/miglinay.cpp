#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,s,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&k,&s);
		int total=k*s,i;
		int a,miglinay;
		//	int total=k*s;
		int sundays=s/7;
		int adays=s-sundays;
		int f=0;
		if(6*n<7*k || k>n || adays*n<total){
			cout<<-1<<endl;
		}
		else{
		miglinay=n-k;
		for( i=2;i<=s;i++){
			if(i%7!=0){
				miglinay=n+miglinay-k;
				a=k*(s-i);
				if(miglinay>=a){
					break;
				}
			}
			else{
				miglinay=miglinay-k;
				if(miglinay<0){
					f=1;
					break;
				}
			}
		}
		if(f==1)
		cout<<-1<<endl;
		else cout<<i<<endl;
	}
		
	}
}
