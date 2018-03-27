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
    	int s[n],d[n];
    	int max=0;
    	for(int i=0;i<n;i++){
    		cin>>s[i];
    		d[i]=s[i];
    		if(s[i]>max)
    		max=s[i];
		}
	//	cout<<"max:"<<max<<endl;
		if(n==1){
			cout<<0<<"\n";
		}
		else if(n==2){
			cout<<1<<" "<<1<<"\n";
		}
		else{
			sort(d,d+n);
			int ind=n-1;
		int a[n]={0};
		//vector <int> a(n,1);
		for(int i=0;i<n-1;i++){
			unsigned long long int sum=0;
			for(int j=i+1;j<n;j++){
				if(s[j]>=sum){
					a[i]++;
				//	cout<<"s[j]:"<<s[j]<<endl;
				//	cout<<"sum:"<<sum<<endl;
				//	cout<<"a[i]:"<<a[i]<<endl;
				}
				if(s[i]>=sum){
					a[j]++;
					//cout<<"s[i]:"<<s[i]<<endl;
					//cout<<"sum:"<<sum<<endl;
					//cout<<"a[j]:"<<a[j]<<endl;
				}
				sum=sum+s[j];
				if(sum>max)
				break;
			}
			if(a[i]==max){
				ind--;
				max=d[ind];
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}
}
