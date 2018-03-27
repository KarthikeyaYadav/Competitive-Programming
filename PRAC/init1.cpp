#include<cstdio>
using namespace std;
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int t[n+1];
		for(int i=0;i<=n;i++){
			scanf("%d",&t[i]);
		}
		int time=t[0];
		if(n==0){
			printf("%d\n",t[0]);
		}
		else{
			for(int i=1;i<=n;i++){
				if(time%2==0){
					time=time+t[i]+1;
				}
				else {
					time=time+t[i];
				}
			}
			printf("%d\n",time);
		}
	}
}
