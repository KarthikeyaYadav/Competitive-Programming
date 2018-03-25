#include <bits/stdc++.h>
using namespace std;
int coprime(int a, int b) {
     
    if ( __gcd(a, b) == 1)
        return 1; 
    else
        return 0;        
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    unsigned long long t,n,m,sum,x,y,a,b,temp;
    int flag=0;
    cin>>t;
    while(t--){
    	flag=0;
    	cin>>n>>m;
    	sum=(n*(n+1));
    	cout<<"sum:"<<sum<<endl;
    	sum=sum/2;
    	cout<<"sum:"<<sum<<endl;
    	if(sum>m){
		temp = sum+m;
		cout<<"m:"<<m<<endl;
		cout<<"temp:"<<temp<<endl;
		if(temp%2==1)
		flag=1;
    	//flag=1;
    	cout<<"flag:"<<flag<<endl;
    	if(flag==0){
		
    	x=(sum+m)/2;
    	cout<<"x:"<<x<<endl;
    	y=x-m;
    	cout<<"y:"<<y<<endl;
    	a=min(x,y);
    	b=max(x,y);
    	cout<<"a:"<<a<<"\nb:"<<b<<endl;
    	int ans = coprime(a, b);
    	if(ans==1)
    	cout<<"Yes\n";
    	else cout<<"No\n";
    }
    else cout<<"No\n";
    }
    else if(sum==m){
    	if(m==1)
    	cout<<"Yes\n";
    	else cout<<"No\n";
	}
	else cout<<"No\n";
	}
	return 0;
}
