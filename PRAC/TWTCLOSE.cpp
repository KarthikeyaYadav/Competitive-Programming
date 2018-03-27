#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector <int> a(n+1,0);
    //int a[n+1]={0};
    string s;
    int x,count=0;
    while(k--){
    	cin>>s;
    	if(s=="CLICK"){
    		cin>>x;
    		if(a[x]==0){
    			a[x]=1;
    			count++;
    			cout<<count<<"\n";
			}
			else{
				a[x]=0;
				count--;
				cout<<count<<"\n";
			}
		}
		else{
			 //a[n+1]={0};
			 a.assign(n+1,0);
			count=0;
			cout<<count<<"\n";
		}
	}
    return 0;
}
