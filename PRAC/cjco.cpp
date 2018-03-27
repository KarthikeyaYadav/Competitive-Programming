#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,s,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&k,&s);
		int total=k*s;
		int sundays=s/7;
		int adays=s-sundays;
		int i=1,f=0;
		if(6*n<7*k){
			cout<<-1<<endl;
		}
		else{
		
		while(1){
			if(i*n>=total)
			break;
			
			if(i>adays){
				f=1;
				break;
			}
			i++;
		}
		
		if(f==1)
		cout<<-1<<endl;
		else cout<<i<<endl;
	}
	}
}
