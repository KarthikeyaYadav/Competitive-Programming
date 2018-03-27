#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	string s;
	for(int i=0;i<t;i++){
		cin>>s;
		int a=0,b=0,f=0,c=0,j;
	for(j=0;j<s.length();j++){
		if(s.at(j)=='A'){
			f=0;
			a++;
			break;
		}
		else if(s.at(j)=='B'){
			f=1;
			b++;
			break;
		}
	}
	for(int k=j;k<s.length();k++){
		if(s.at(k)=='.')
		c++;
		else if(s.at(k)=='A'){
			if(f==0)
			a=a+c+1;
			c=0;
			f=0;
		}
		else if(s.at(k)=='B'){
			if(f==1)
			a=a+c+1;
			c=0;
			f=1;
		}
	}
		printf("%d %d\n",a,b);
	}
	return 0;
}
