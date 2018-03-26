#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	//ios_base::sync_with_stdio(0);
   // cin.tie(NULL);
   cin>>t;
   int n,a,b,c,count;
   while(t--){
   	count=0;
   	int temp,t1,t2,f=0;
   	cin>>n>>a>>b>>c;
   //	cout<<"hii";
   	for(int i=1;i<=sqrt(n);i++){
   		f=0;
   		if(n%i==0 && i<=a){
   	if(n/i==i){
   		f=1;
   		temp=i;
	   }
	   else{
	   	t1=i;
	   	t2=n/i;
	   }
	   if(f==1){
	   	for(int j=1;j<=sqrt(temp);j++){
	   		if(temp%j==0 && j<=b && temp/j<=c){
	   			count++;
	   			if(j!=temp/j && j<=c && temp/j<=b)
	   			count++;
	   			//cout<<"hii "<<i<<" "<<j<<" "<<temp/j<<"\n";
			   }
		   }
	   }
	   else{
	   	int q1=n/t1,q2=n/t2;
	   	if(t1<=a)
	   	for(int j=1;j<=sqrt(q1);j++){
	   		if(q1%j==0 && j<=b && q1/j<=c){
	   			count++;
	   		//	cout<<"q1 "<<t1<<" "<<j<<" "<<q1/j<<"\n";
	   		}
	   			if(q1%j==0 && j!=q1/j && q1/j<=b && j<=c){
				   
	   			count++;
	   			//cout<<"q1 "<<t1<<" "<<q1/j<<" "<<j<<"\n";
	   		}
	   				
			   
		   }
		   if(t2<=a)
		   for(int j=1;j<=sqrt(q2);j++){
	   		if(q2%j==0 && j<=b && q2/j<=c){
	   			count++;
	   		//	cout<<t2<<" "<<j<<" "<<q2/j<<"\n";
	   		}
	   			if(q2%j==0 && j!=q2/j && q2/j<=b && j<=c){
				   
	   			count++;
	   		//	cout<<t2<<" "<<q2/j<<" "<<j<<"\n";
	   	}
	   				
			   
		   }
	   }
			   }
		   }
	   
	   cout<<count<<"\n";
   }
   return 0;
}
