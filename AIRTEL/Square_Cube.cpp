#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,l,r,k;
    cin>>n>>q;
    //vector <int> a(n+1);
    //a.push_back(0);
    int a[n+1];
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	//a.push_back(k);
	}
	long long pro=1;
	while(q--){
		int sf=0,cf=0,pro=1;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			pro=pro*a[i];
		}
		//cout<<"pro:"<<pro<<endl;
		if(pro>=0){
		
		long double sr = sqrt(pro);
		//cout<<"sr:"<<sr<<endl;
		long long rr=floor(sr);
		if(rr*rr==pro)
		sf=1;
		rr=ceil(sr);
		if(rr*rr==pro)
		sf=1;
		//if((sr - floor(sr))==0)
		//sf=1;
	}
	if(pro<0)
	pro=pro*-1;
		long double cr = pow(pro, 1.0/3.0);
		//cout<<"cr:"<<cr<<endl;
		//cout<<"floor(cr):"<<floor(cr)<<endl;
		unsigned long long r=floor(cr);
		unsigned long long cube=r*r;
		cube=cube*r;
		if(cube==pro)
		cf=1;
		
		r=ceil(cr);
		cube=r*r;
		cube=cube*r;
		if(cube==pro)
		cf=1;
		//if((cr - floor(cr))==0)
	//	cf=1;
		//cout<<"cf:"<<cf<<endl;
		if(cf==1 && sf==1)
		cout<<"Both\n";
		else if(cf==1)
		cout<<"Cube\n";
		else if(sf==1)
		cout<<"Square\n";
		else cout<<"None\n";
	}
	return 0;
}
