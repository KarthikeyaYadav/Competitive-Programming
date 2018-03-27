#include<cstdio>
using namespace std;
int main(){
	int q,k;
	unsigned long long int n;
	scanf("%d",&q);
	while(q--){
		scanf("%llu %d",&n,&k);
		int z=0;
		unsigned long long int i=1,sum=0;
		if(n==0)
		printf("%d\n",z);
		else if(k==1){
			while(1){
				sum=sum+i;
				if(sum>n)
				break;
				i++;
			}
			i--;
			printf("%llu\n",i);
		}
		else if(k==2){
			while(1){
				sum=sum+(i*i);
				if(sum>n)
				break;
				i++;
			}
			i--;
			printf("%llu\n",i);
		}
		else if(k==3){
			while(1){
				unsigned long long int h=i*i;
				sum=sum+(i*h);
				if(sum>n)
				break;
				i++;
			}
			i--;
			printf("%llu\n",i);
		}
	}
	
}
