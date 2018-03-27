#include<stdio.h>
using namespace std;

int main() {
     int n,q;
     scanf("%d",&n);
     scanf("%d",&q);
     int *a=new int[n];
     for(int i=1;i<=n;i++){
     	scanf("%d",&a[i]);
	 }
	 for(int i=0;i<q;i++){
	 	int c,aa,b,x,y;
	 	scanf("%d",&c);
	 	if(c==1){
	 		scanf("%d",&aa);
	 		scanf("%d",&b);
	 		scanf("%d",&x);
	 		scanf("%d",&y);
	 		for(int j=aa;j<=b;j++){
	 			if(a[j]==x)
	 			a[j]=y;
			 }
		 }
		 else{
		 	scanf("%d",&aa);
		 	scanf("%d",&b);
		 	scanf("%d",&x);
		 	int count=0;
		 	for(int k=aa;k<=b;k++){
		 		if(a[k]==x)
		 		count++;
			 }
			 printf("%d\n",count);
		 }
	 }
    return 0;
}
