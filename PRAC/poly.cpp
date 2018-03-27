#include<cstdio>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
   unsigned long long int n,q,z;
unsigned long long int c,w,e,r,y;
	for(int i1=0;i1<t;i1++){
		scanf("%llu",&n);
		unsigned long long int a0[n],a1[n],a2[n],a3[n];
		for(int i=0;i<n;i++){
			scanf("%llu%llu%llu%llu",&a0[i],&a1[i],&a2[i],&a3[i]);
		}
		scanf("%llu",&q);
		for(int i=0;i<q;i++){
			scanf("%llu",&z);
			int f;
		unsigned long long int min=17446744073709551614;
			for(int j=0;j<n;j++){
				//c=(a0[j])+(a1[j]*z)+(a2[j]*z*z)+(a3[j]*z*z*z);
				w=a0[j];
			//	printf("%llu\n",w);
				e=a1[j]*z;
			//	printf("%llu\n",e);
				r=a2[j]*z;
				r=r*z;
			//	printf("%llu\n",r);
				y=a3[j]*z;
				y=y*z;
				y=y*z;
			//	printf("%llu\n",y);
				c=w+e+r+y;
			//	printf("%llu\n",c);
				if(min>c){
				f=j;
				min=c;}
			}
			printf("%llu\n",min);
		}
	}
	return 0;
}
