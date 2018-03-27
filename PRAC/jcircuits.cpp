#include<bits/stdc++.h>
using namespace std;
int main(){
	 int n,k;
	scanf("%d %d",&n,&k);
	unsigned long long int a=n/k,b=n%k;
	unsigned long long int t=a+1,r=k-b,t1=a-1;
	unsigned long long int c=b*(a*t)/2;
	c=c+((t1*(t1+1))/2)*r;
	printf("%llu",c);
}

