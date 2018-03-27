#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned int n,q,l,r;
	cin>>n>>q;
	unsigned int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(q--){
		cin>>l>>r;
		unsigned int ans=0;
		for(int i=l;i<=r;i++){
			ans=ans|a[i];
		}
		cout<<"ans:"<<ans<<endl;
		std::string binary = std::bitset<32>(ans).to_string();
		std::cout<<binary<<"\n";
		binary[0]='0';
		std::cout<<binary<<"\n";
		for(int i=1;i<32;i++){
			if(binary[i]=='1')
			binary[i]='0';
			else binary[i]='1';
		}
		std::cout<<binary<<"\n";
		unsigned long decimal = std::bitset<32>(binary).to_ulong();
    std::cout<<decimal<<"\n";
		unsigned int com=decimal;
		cout<<"com:"<<com<<endl;
		unsigned int c1=(pow(2,31)-1-(ans-com));
		cout<<"c1:"<<c1<<endl;
		unsigned int c2=(pow(2,31)-1-(com-ans));
		cout<<"c2:"<<c2<<endl;
		unsigned int fans=max(c1,c2);
		cout<<"fans:"<<fans<<endl;
		cout<<fans<<"\n";
	}
}
