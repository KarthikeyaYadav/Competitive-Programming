#include<bits/stdc++.h>
using namespace std;
long long int fun(int n, vector <long long int> v){
	if(n<12){
		v[n]=n;
		return n;
	}
	else{
		long long int a,b,c;
		if(v[n/2]!=0){
		a=v[n/2];	
		}
		else{
			a=fun(n/2,v);
			v[n/2]=a;
		}
		if(v[n/3]!=0){
		b=v[n/3];	
		}
		else{
			b=fun(n/3,v);
			v[n/3]=b;
		}
		if(v[n/4]!=0){
		c=v[n/4];	
		}
		else{
			c=fun(n/4,v);
			v[n/4]=c;
		}
		return (a+b+c);
	}
}
int main(){
	//ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    int n;
   vector <long long int> v(100000000);
   
   while(cin>>n){
   	//char c;
   	//cin>>c;
   	//if(c=='\n')
   	//break;
   	//int n=(int)c;
   	
   	cout<<fun(n,v)<<"\n";
   }
}
