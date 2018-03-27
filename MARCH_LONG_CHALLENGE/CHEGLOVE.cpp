#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int l[n],g[n];
    	for(int i=0;i<n;i++)
    	cin>>l[i];
    	for(int i=0;i<n;i++)
    	cin>>g[i];
    	int f1=0,f2=0;
    	for(int i=0;i<n;i++){
    		if(f1==0){
    			if(l[i]>g[i]){
    				f1=1;
				}
			}
			if(f2==0){
				if(l[n-1-i]>g[i]){
					f2=1;
				}
			}
			if(f1==1 && f2==1)
			break;
		}
		if(f1==1 && f2==1){
			cout<<"none\n";
		}
		else if(f1==0 && f2==0)
		cout<<"both\n";
		else if(f1==0 && f2==1)
		cout<<"front\n";
		else cout<<"back\n";
	}
    return 0;
}
