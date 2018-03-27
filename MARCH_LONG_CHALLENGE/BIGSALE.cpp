#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    cout<<setprecision(12);
    while(t--){
    	int n;
    	cin>>n;
    	double s=0;
    	while(n--){
		
    	double p,q,d;
    	cin>>p>>q>>d;
    	double temp=p*d;
    	temp=temp/100;
    	temp=temp+p;
    	d=d/100;
    	d=1-d;
    	temp=temp*d;
    	double te=p-temp;
    	te=te*q;
    	//cout<<setprecision(12)<<te;
    	s=s+te;
    }
    cout<<s<<"\n";
    	
	}
    return 0;
}
