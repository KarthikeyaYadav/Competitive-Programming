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
    	int s[n];
    	for(int i=0;i<n;i++){
    		cin>>s[i];
		}
		if(n==1){
			cout<<0<<"\n";
		}
		else if(n==2){
			cout<<1<<" "<<1<<"\n";
		}
		else{
		
		int a[n];
		a[0]=1;
		a[n-1]=1;
		for(int i=1;i<n-1;i++)
		a[i]=2;
		for(int i=0;i<n;i++){
			if(i-2>=0){
				unsigned long long int sum=s[i-1];
				for(int j=i-2;j>=0;j--){
					if(s[j]>=sum){
						a[i]++;
					}
					sum=sum+s[j];
					if(sum>1000000000){
						break;
					}
				}
			}
			if(i+2<n){
				unsigned long long int sum=s[i+1];
				for(int j=i+2;j<n;j++){
					if(s[j]>=sum){
						a[i]++;
					}
					sum=sum+s[j];
						if(sum>1000000000){
						break;
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
		
	}
}
	return 0;
}
