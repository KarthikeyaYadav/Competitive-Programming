#include<cstdio>
using namespace std;
int main(){
	int t,p,c;
	scanf("%d",&t);
	int n;
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		int a[n];
		for(int j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		
		for(int j=0;j<n;j++){
			j=(j+1)%n;
			p=(j+1)%n;
			c=0;
			for(int k=1;k<n;k++){
				if(a[j]>a[p])
				c++;
				p=(p+1)%n;
			}
			printf("%d ",c);
		}
		printf("\n");
	}
	return 0;
}
