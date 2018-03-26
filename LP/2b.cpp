#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	std::getline (std::cin,s);
	int si=s.length();
	si--;
	int f=0;
	if((int)s[0]==39) {
		if((int)s[si]==39)
		cout<<"\nString\n";	
		else cout<<"\nNot a String\n";
		}
		else if((int)s[0]==34){
			if((int)s[si]==34)
			cout<<"\nString\n";	
			else cout<<"\nNot a String\n";
		}
		else if((int)s[0]>=48 && (int)s[0]<=57){
			cout<<"\nNot a String\n";
		}
		else {
			for(int i=0;i<=si;i++){
				if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='='||s[i]=='>'||s[i]=='<'||s[i]=='!'){
				cout<<"\nNot a String\n";
				f=1;
				break;
				}
			}
			if(f==0)
		cout<<"\nString\n";
	}
}
