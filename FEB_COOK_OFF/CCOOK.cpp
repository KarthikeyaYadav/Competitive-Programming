#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
   cin>>t;
   int a,b,c,d,e,sum=0;
   while(t--){
   	cin>>a>>b>>c>>d>>e;
   	sum=a+b+c+d+e;
   	if(sum==0){
   		cout<<"Beginner\n";
	   }
	   else if(sum==1){
	   	cout<<"Junior Developer\n";
	   }
	   else if(sum==2){
	   	cout<<"Middle Developer\n";
	   }
	   else if(sum==3){
	   	cout<<"Senior Developer\n";
	   }
	   else if(sum==4){
	   	cout<<"Hacker\n";
	   }
	   else cout<<"Jeff Dean\n";
   }
   return 0;
}
