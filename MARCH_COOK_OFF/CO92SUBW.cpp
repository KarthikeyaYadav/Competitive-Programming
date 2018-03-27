#include <bits/stdc++.h>
using namespace std;

int bs(vector <int> v,int l,int r,int x){
	if(l>=r){
		return l;
	}
	else{
		int mid=(l+r)/2;
		if(v[mid]==x){
			return mid;
		}
		else if(v[mid]>x){
			if(v[mid-1]<=x)
			return mid-1;
			else return bs(v,l,mid,x);
		}
		else {
			if(v[mid+1]>=x)
			return mid;
			else return bs(v,mid,r,x);
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> v;
    int temp=1,dif=2;
    while(temp<2000000000){
    	v.push_back(temp);
    	temp=temp+dif;
    	dif++;
	}
    int t,x;
    cin>>t;
    while(t--){
    	cin>>x;
    	int ind=bs(v,0,v.size()-1,x);
    	//cout<<"ind:"<<ind<<endl;
    	int les=v[ind],ri=v[ind+1];
    	//cout<<"les:"<<les<<endl;
    	//cout<<"ri:"<<ri<<endl;
    	int ans=1+ind;
    	int a=x-les,b=ri-x;
    	//cout<<"a:"<<a<<endl;
    	//cout<<"b:"<<b<<endl;
    	int y=min(a,b);
    	ans=ans+y;
    	if(y==b && a!=b)
    	ans++;
    	cout<<ans<<"\n";
	}
	return 0;
}
