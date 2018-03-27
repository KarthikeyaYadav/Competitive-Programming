#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,x,k;
	string s;
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
   cin>>t;
   
   while(t--){
   	int f=0,e=0,o=0;
   	cin>>n>>m>>x>>k;
   	cin>>s;
   	if(m==0){
   		cout<<"no\n";
	   }
	   else if(n>k){
	   	cout<<"no\n";
	   }
	   else{
	   	for(int i=0;i<s.length();i++){
	   		if(s[i]=='E')
	   		e++;
	   		else o++;
		   }
		   
		   for(int i=1;i<=m;i++){
		   	if(i%2==1){
		   	if(o>=x){
		   		n=n-x;
		   		if(n<=0){
		   			cout<<"yes\n";
		   			f=1;
		   			break;
				   }
		   		o=o-x;
		   		k=k-x;
		   		/*if(k<=0){
		   			cout<<"no\n";
		   			break;
				   }*/
			   }
			   else if(o>0){
			   	n=n-o;
			   	if(n<=0){
		   			cout<<"yes\n";
		   			f=1;
		   			break;
				   }
			   	k=k-o;
			   	/*if(k<=0){
		   			cout<<"no\n";
		   			break;
				   }*/
				   o=0;
			   }
			   }
			   else{
			   	if(e>=x){
		   		n=n-x;
		   		if(n<=0){
		   			cout<<"yes\n";
		   			f=1;
		   			break;
				   }
		   		e=e-x;
		   		k=k-x;
		   		/*if(k<=0){
		   			cout<<"no\n";
		   			break;
				   }*/
			   }
			   else if(e>0){
			   	n=n-e;
			   	if(n<=0){
		   			cout<<"yes\n";
		   			f=1;
		   			break;
				   }
			   	k=k-e;
			   	/*if(k<=0){
		   			cout<<"no\n";
		   			break;
				   }*/
				   e=0;
			   }
			   }
		   }
		   if(f!=1){
		   	cout<<"no\n";
		   }
	   }
   }
   
}
