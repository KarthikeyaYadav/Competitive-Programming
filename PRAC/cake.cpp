#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,n;
	long long int c=0,i;
	cin>>t;
	while(t--){
		c=0;
		cin>>n;
		int co=n-1;
		if(n>=900000){
			c=8769191271133;
				for(i=900001;i<=2*n;i++){
			int r=i,e=0,d=0;
			while(r){
				int z=r%10;
				r=r/10;
				if(z%2==0){
					e=e+z;
				}
				else{
					d=d+z;
				}
			}
			int dif=abs(e-d);
			if(i<=n+1){
				c=c+(dif*(i-1));
			}
			else{
				if(i<2*n)
				c=c+dif*2;
				else c=c+dif;
				co--;
			}
		}
		}
		else if(n>=100000){
			c=98595786672;
				for(i=100001;i<=2*n;i++){
			int r=i,e=0,d=0;
			while(r){
				int z=r%10;
				r=r/10;
				if(z%2==0){
					e=e+z;
				}
				else{
					d=d+z;
				}
			}
			int dif=abs(e-d);
			if(i<=n+1){
				c=c+(dif*(i-1));
			}
			else{
				c=c+dif*co;
				co--;
			}
		}
		}
		else if(n>=10000){
			c=880051892;
				for(i=10001;i<=2*n;i++){
			int r=i,e=0,d=0;
			while(r){
				int z=r%10;
				r=r/10;
				if(z%2==0){
					e=e+z;
				}
				else{
					d=d+z;
				}
			}
			int dif=abs(e-d);
			if(i<=n+1){
				c=c+(dif*(i-1));
			}
			else{
				c=c+dif*co;
				co--;
			}
		}
		}
		else if(n>=1000){
			c=7623352;
				for(i=1001;i<=2*n;i++){
			int r=i,e=0,d=0;
			while(r){
				int z=r%10;
				r=r/10;
				if(z%2==0){
					e=e+z;
				}
				else{
					d=d+z;
				}
			}
			int dif=abs(e-d);
			if(i<=n+1){
				c=c+(dif*(i-1));
			}
			else{
				c=c+dif*co;
				co--;
			}
		}
		}
		else{
		
		for(i=2;i<=2*n;i++){
			int r=i,e=0,d=0;
			while(r){
				int z=r%10;
				r=r/10;
				if(z%2==0){
					e=e+z;
				}
				else{
					d=d+z;
				}
			}
			int dif=abs(e-d);
			if(i<=n+1){
				c=c+(dif*(i-1));
			}
			else{
				c=c+dif*co;
				co--;
			}
		}
	}
		cout<<c<<"\n";
	}
	return 0;
}
