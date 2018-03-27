#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
   cin>>t;
   int n,c,d,s;
   while(t--){
   	cin>>n;
   	int a[n];
   	long double ans;
   	long long int sum=0;
   	for(int i=0;i<n;i++){
   		cin>>a[i];
   		sum=sum+a[i];
	   }
	   cin>>c>>d>>s;
	   long double time=d/s;
	   long double ft=(n-1)*time;
	   ft=ft+sum;
	   long double ct[n],cts[n];
	   ct[0]=a[0];
	   cts[0]=2*a[0];
	   for(int i=1;i<n;i++){
	   	ct[i]=ct[i-1]+time+a[i];
	   }
	   for(int i=1;i<n;i++){
	   	if(cts[i-1]+time<ct[i]){
	   		cts[i]=ct[i]+a[i];
		   }
		   else{
		   	cts[i]=cts[i-1]+time+a[i];
		   }
	   }
	   cout << fixed << showpoint;
cout << setprecision(9);
	   if(c==2){
	   	cout<<cts[n-1]-ct[n-1]<<"\n";
	   }
	   else{
	   	long double q=cts[n-1]-ct[n-1];
	   	cout<<q*(n-1)<<"\n";
	   }
   }
}
