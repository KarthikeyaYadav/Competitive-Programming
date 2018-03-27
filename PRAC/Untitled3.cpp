#include<iostream>
#include<string>
using namespace std;
int sti(string s){
	int sum=0;
	for(int h=0;h<s.length();h++){
		int i=s.at(h)-'0';
		sum=sum*10+i;
	}
	return sum;
}
int main(){
	string s="100222";
	int a=sti(s);
	cout<<a;
}
