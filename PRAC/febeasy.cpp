#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		long int sum=1;
		if(n%2==1)
		sum=sum+n;
		//cout<<sqrt(n);
		for(int i=2;i<=sqrt(n)+1;i++){
			if(n%i==0){
				if(i%2==1)
				sum=sum+i;
				if((n/i)%2==1)
				sum=sum+n/i;
		}
		}
		printf("%ld\n",sum);
	}
}
