#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	 std::getline (std::cin,s);
	if(s[0]=='/'){
		if(s[1]=='/' || s[1]=='*'){
			cout<<"\nIt is a comment\n";
		}
		else cout<<"\n Not a comment!!!\n";
	}
	else cout<<"\n Not a comment!!!\n";
}
