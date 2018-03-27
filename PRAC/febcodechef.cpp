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
   	int c=0,h=0,e=0,f=0,count=0,cp=0,hp=0,ep=0,fp=0;
   	for(int i=0;i<s.length();i++){
   		if(s[i]=='c' || s[i]=='h' ||s[i]=='e' ||s[i]=='f'){
   			if(s[i]=='c'){
   				c++;
   				if(c==1)
   				cp=i;
   				if(c>1){
   					i=cp;
   					c=0;
   					h=0;
   					e=0;
   					f=0;
   					continue;
				   }
   			}
   			else if(s[i]=='h'){
   				h++;
   				if(h==1)
   				hp=i;
   				if(h>1){
   					i=hp;
   					c=0;
   					h=0;
   					e=0;
   					f=0;
   					continue;
				   }
   			}
   			else if(s[i]=='e'){
   				e++;
   				if(e==1)
   				ep=i;
   				if(e>1){
   					i=ep;
   					c=0;
   					h=0;
   					e=0;
   					f=0;
   					continue;
				   }
   			}
   			else if(s[i]=='f'){
   				f++;
   				if(f==1)
   				fp=i;
   				if(f>1){
   				i=fp;
   					c=0;
   					h=0;
   					e=0;
   					f=0;
   					continue;
				   }
   			}
   			
   				if((c+h+e+f)==4){
   					count++;
   					c=0;
   					h=0;
   					e=0;
   					f=0;
   					i=i-3;
				   }
			   
		   }
		   else{
		   	c=0;
			   h=0;
			   e=0;
			   f=0;
		   }
	   }
	   if(count!=0){
	   	cout<<"lovely "<<count<<"\n";
	   }
	   else cout<<"normal\n";
   }
}
