#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
   cin>>t;
   string s;
   while(t--){
   	cin>>s;
   	int count=0,ind;
   	int c[26]={0};
   	vector<vector<int> > matrix(26);
   	for(int i=0;i<s.length();i++){
   		c[((int)s[i]-97)]++;
   		matrix[((int)s[i]-97)].push_back(i+1);
	   }
	   for(int i=0;i<26;i++){
	   	if(c[i]%2==1){
	   		count++;
		   }
	   }
	   if(count>1){
	   	cout<<-1<<"\n";
	   }
	   else if(s.length()%2==0 && count==1){
	   	cout<<-1<<"\n";
	   }
	   else if(s.length()%2==1 && count==0){
	   	cout<<-1<<"\n";
	   }
	   else{
	   	int a[s.length()],l,r,m;
	   	if(s.length()%2==0){
	   		l=(s.length()/2)-1;
	   		r=l+1;
	   		for(int i=0;i<26;i++){
	   			if(c[i]>0){
	   				while(!matrix[i].empty()){
	   				a[l]=matrix[i].back();
	   				matrix[i].pop_back();
	   				a[r]=matrix[i].back();
	   				matrix[i].pop_back();
	   				l--;
	   				r++;
	   			}
				   }
			   }
			   for(int i=0;i<s.length();i++){
			   	cout<<a[i]<<" ";
			   }
			   cout<<"\n";
		   }
		   else{
		   	m=s.length()/2;
		   	l=m-1;
		   	r=m+1;
		   	int temp=-1;
		   	for(int i=0;i<26;i++){
		   		if(c[i]%2==1){
		   			temp=i;
				   }
			   }
			   if(temp==-1){
			   	cout<<-1<<"\n";
			   }
			   else{
			   
			   a[m]=matrix[temp].back();
			   matrix[temp].pop_back();
			   c[temp]--;
	   		for(int i=0;i<26;i++){
	   			if(c[i]>0 ){
	   				while(!matrix[i].empty()){
	   				a[l]=matrix[i].back();
	   				matrix[i].pop_back();
	   				a[r]=matrix[i].back();
	   				matrix[i].pop_back();
	   				l--;
	   				r++;
	   			}
				   }
			   }
			   for(int i=0;i<s.length();i++){
			   	cout<<a[i]<<" ";
			   }
			   cout<<"\n";
		}
		   }
	   }
   }
}
