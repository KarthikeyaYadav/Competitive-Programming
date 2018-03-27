#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,n;
	long long int c=0;
	cin>>t;
	while(t--){
		c=0;
		cin>>n;
		int co=n-1;
		for(int i=2;i<=2*n;i++){
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
		cout<<c<<"\n";
	}
	return 0;
}
