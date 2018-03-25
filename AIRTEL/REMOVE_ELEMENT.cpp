#include <bits/stdc++.h>
using namespace std;
#define num 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
    	cin>>n;
    	unsigned long long a[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
		}
		sort(a,a+n);
		int sec=2;
		unsigned long long ans=a[n-1],mul=1;
		for(int i=n-2;i>=0;i--){
			//sec++;
			mul=((mul%num)*(sec%num))%num;
			ans=((ans%num)+(((a[i]%num)*(mul%num))%num))%num;
			//cout<<"ans:"<<ans<<endl;
			sec++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
