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
    	//vector <int> q(1000000005);
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	sort(a, a+n);
    	int temp,freq=0;
    	for(int i=0;i<n-1;i++){
    		if(a[i]==a[i+1]){
    			freq++;
			}
		}
    /*	for(int i=0;i<n;i++){
    		cin>>temp;
    		if(q[temp]==0){
    			q[temp]=1;
			}
			else freq++;
		}*/
		cout<<freq<<"\n";
	}
    return 0;
}
