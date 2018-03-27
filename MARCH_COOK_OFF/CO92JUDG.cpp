#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
    	cin>>n;
    	int s1=0,s2=0,temp,m1=0,m2=0;
    	for(int i=0;i<n;i++){
    		cin>>temp;
    		s1=s1+temp;
    		if(temp>m1)
    		m1=temp;
		}
		for(int i=0;i<n;i++){
    		cin>>temp;
    		s2=s2+temp;
    		if(temp>m2)
    		m2=temp;
		}
		s1=s1-m1;
		s2=s2-m2;
		if(s1==s2){
			cout<<"Draw\n";
		}
		else if(s1>s2){
			cout<<"Bob\n";
		}
		else cout<<"Alice\n";
	}
	return 0;
}
